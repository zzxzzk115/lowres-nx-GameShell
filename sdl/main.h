//
// Copyright 2017-2018 Timo Kloss
//
// This file is part of LowRes NX.
//
// LowRes NX is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// LowRes NX is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with LowRes NX.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef main_h
#define main_h

#include <stdbool.h>

enum MainState {
    MainStateUndefined,
    MainStateBootIntro,
    MainStateRunningProgram,
    MainStateRunningTool,
    MainStateDevMenu,
};

void bootNX(void);
void rebootNX(void);
bool hasProgram(void);
const char *getMainProgramFilename(void);
void selectProgram(const char *filename);
void runMainProgram(void);
void runToolProgram(const char *filename);
void showDevMenu(void);
bool usesMainProgramAsDisk(void);
void getDiskFilename(char *outputString);
void getRamFilename(char *outputString);
void setMouseEnabled(bool enabled);

#endif /* main_h */