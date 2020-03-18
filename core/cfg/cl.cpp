/*
	Command line parsing
	~yay~

	Nothing too interesting here, really
*/

#include <cstdio>
#include <cctype>
#include <cstring>

#include "cfg/cfg.h"

char* trim_ws(char* str)
{
	if (str==0 || strlen(str)==0)
		return 0;

	while(*str)
	{
		if (!isspace(*str))
			break;
		str++;
	}

	size_t l=strlen(str);
	
	if (l==0)
		return 0;

	while(l>0)
	{
		if (!isspace(str[l-1]))
			break;
		str[l-1]=0;
		l--;
	}

	if (l==0)
		return 0;

	return str;
}

int setconfig(char** arg,int cl)
{
	int rv=0;
	for(;;)
	{
		if (cl<1)
		{
			WARN_LOG(COMMON, "-config : invalid number of parameters, format is section:key=value");
			return rv;
		}
		char* sep=strstr(arg[1],":");
		if (sep==0)
		{
			WARN_LOG(COMMON, "-config : invalid parameter %s, format is section:key=value", arg[1]);
			return rv;
		}
		char* value=strstr(sep+1,"=");
		if (value==0)
		{
			WARN_LOG(COMMON, "-config : invalid parameter %s, format is section:key=value", arg[1]);
			return rv;
		}

		*sep++=0;
		*value++=0;

		char* sect=trim_ws(arg[1]);
		char* key=trim_ws(sep);
		value=trim_ws(value);

		if (sect==0 || key==0)
		{
			WARN_LOG(COMMON, "-config : invalid parameter, format is section:key=value");
			return rv;
		}

		const char* constval = value;
		if (constval==0)
			constval="";
		INFO_LOG(COMMON, "Virtual cfg %s:%s=%s", sect, key, value);

		cfgSetVirtual(sect,key,value);
		rv++;

		if (cl>=3 && stricmp(arg[2],",")==0)
		{
			cl-=2;
			arg+=2;
			rv++;
			continue;
		}
		else
			break;
	}
	return rv;
}

int showhelp(char** arg,int cl)
{
	NOTICE_LOG(COMMON, "Available commands:");

	NOTICE_LOG(COMMON, "-config	section:key=value [, ..]: add a virtual config value\n Virtual config values won't be saved to the .cfg file\n unless a different value is written to em\nNote :\n You can specify many settings in the xx:yy=zz , gg:hh=jj , ...\n format.The spaces between the values and ',' are needed.");
	NOTICE_LOG(COMMON, "-help: show help info");

	return 0;
}

bool ParseCommandLine(int argc,char* argv[])
{
	settings.imgread.ImagePath[0] = '\0';
	int cl=argc-2;
	char** arg=argv+1;
	while(cl>=0)
	{
		if (stricmp(*arg,"-help")==0 || stricmp(*arg,"--help")==0)
		{
			showhelp(arg,cl);
			return true;
		}
		else if (stricmp(*arg,"-config")==0 || stricmp(*arg,"--config")==0)
		{
			int as=setconfig(arg,cl);
			cl-=as;
			arg+=as;
		}
		else
		{
			char* extension = strrchr(*arg, '.');

			if (extension
				&& (stricmp(extension, ".cdi") == 0 || stricmp(extension, ".chd") == 0
					|| stricmp(extension, ".gdi") == 0 || stricmp(extension, ".cue") == 0))
			{
				INFO_LOG(COMMON, "Using '%s' as cd image", *arg);
				strcpy(settings.imgread.ImagePath, *arg);
			}
			else if (extension && stricmp(extension, ".elf") == 0)
			{
				INFO_LOG(COMMON, "Using '%s' as reios elf file", *arg);
				cfgSetVirtual("config", "bios.UseReios", "yes");
				strcpy(settings.imgread.ImagePath, *arg);
			}
			else
			{
				INFO_LOG(COMMON, "Using '%s' as rom", *arg);
				strcpy(settings.imgread.ImagePath, *arg);
			}
		}
		arg++;
		cl--;
	}
	return false;
}