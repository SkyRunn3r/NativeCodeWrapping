#pragma once
#define DLLEXP   __declspec( dllexport )
#include <string>

DLLEXP void write_to_file(const std::string &filename, const std::string &message);
