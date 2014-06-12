//
//  xprojRestorer.h
//  XcodeProjAdder
//
//  Created by Luke Hines on 11/06/2014.
//  Copyright (c) 2014 Luke Hines. All rights reserved.
//

#ifndef XcodeProjAdder_xprojRestorer_h
#define XcodeProjAdder_xprojRestorer_h

#include <iostream>
#include "stringMethods.h"
#include "IOMethods.h"

//Restores the backup that is created when files are added to a project
void restoreXprojFromBackup(std::string projectFileLocation);

#endif
