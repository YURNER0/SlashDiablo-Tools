/*****************************************************************************
 *                                                                           *
 *   D2Version.h                                                             *
 *   Copyright (C) 2017 Mir Drualga                                          *
 *                                                                           *
 *   Licensed under the Apache License, Version 2.0 (the "License");         *
 *   you may not use this file except in compliance with the License.        *
 *   You may obtain a copy of the License at                                 *
 *                                                                           *
 *   http://www.apache.org/licenses/LICENSE-2.0                              *
 *                                                                           *
 *   Unless required by applicable law or agreed to in writing, software     *
 *   distributed under the License is distributed on an "AS IS" BASIS,       *
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.*
 *   See the License for the specific language governing permissions and     *
 *   limitations under the License.                                          *
 *                                                                           *
 *---------------------------------------------------------------------------*
 *                                                                           *
 *   This file is used to declare the Diablo II versions that are to be      *
 *   detected from Game.exe and the methods used to detect it.               *
 *                                                                           *
 *****************************************************************************/

#pragma once

#ifndef _D2VERSION_H
#define _D2VERSION_H

#include <windows.h>
#include <string>

enum class GameVersion : int {
    INVALID,
    VERSION_107,
    VERSION_108,
    VERSION_109, VERSION_109b, VERSION_109c, VERSION_109d,
    VERSION_110,
    VERSION_111, VERSION_111b,
    VERSION_112,
    VERSION_113c, VERSION_113d,
    VERSION_114a, VERSION_114b, VERSION_114c, VERSION_114d
};

enum class Glide3xVersion : int {
    INVALID,
    VERSION_14e,
    RESURGENCE
};

namespace D2Version {
GameVersion getGameVersion();
GameVersion getGameVersion(std::string_view versionString);
bool isGameVersion114Plus();
Glide3xVersion getGlide3xVersion();
Glide3xVersion getGlide3xVersion(std::string_view versionString);
std::string determineVersionString(std::wstring_view filePath);
}

#endif
