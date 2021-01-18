#pragma once

#include <fstream>
#include <vector>

#include <cstdio>
#include <zip.h>
#include <fcntl.h>
#include <io.h>
#include <direct.h>

#include "sdl/sdl.h"

#include <dojo/deps/md5/md5.h>
#include <dojo/deps/json.hpp>
#include <dojo/deps/StringFix/StringFix.h>
#include "dojo/deps/filesystem.hpp"

#ifndef _STRUCT_GAMEMEDIA
#define _STRUCT_GAMEMEDIA
struct GameMedia {
	std::string name;
	std::string path;
};
#endif

class DojoFile
{
private:
	nlohmann::json LoadJsonFromFile(std::string filename);
	nlohmann::json LoadedFileDefinitions;

public:
	DojoFile();
	bool CompareRom(std::string filename, std::string md5_checksum);
	int Unzip(std::string archive_path);
	void OverwriteDataFolder(std::string new_root);
	void CopyNewFlycast(std::string new_root);
};

extern DojoFile dojo_file;
