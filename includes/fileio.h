#include <iostream>
#include <string>
#include <vector>
#include "../includes/utils.h"
#include "../includes/constants.h"

#ifndef fileio_h
#define fileio_h

int loadData(const std::string filename, std::vector<process> &myProcesses);

int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif
