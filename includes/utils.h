#include <vector>
#include "../includes/constants.h"

using namespace std;

#ifndef utils_h
#define utils_h

void sortData(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses);

process getNext(vector<process> &myProcesses);

int getSize(vector<process> &myProcesses);

int handleMissingData(vector<process> &myProcesses);

#endif
