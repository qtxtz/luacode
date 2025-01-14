/*

Decoda
Copyright (C) 2007-2013 Unknown Worlds Entertainment, Inc. 

This file is part of Decoda.

Decoda is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Decoda is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Decoda.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef FILE_UTILITY_H
#define FILE_UTILITY_H

#include <wx/filename.h>

void ShowFileInFolder(wxFileName& inPath);
std::string str2ansi(const char * str);
bool saveFile(const char * path, std::string & str);
std::string fileStringANSI(const char * path);

const char * get_options_path();

std::string get_full_path(const char * path);

bool is_file_exist(const char * path);

#endif