#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <math.h>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <vector>
#include <sstream>
#include <algorithm>
#include "storage.h"
//#include "book.h"
#include "HashFunc.h"
#include <list>


int main()
{
    Storage<std::string> test;

    test.add("privet");
    std::cout<< "должно выдать Exist. Выдало: ";
    test.find("privet");
    std::cout<< "должно выдать Not exist. Выдало: ";
    test.find("poka");
    test.add("poka");
    std::cout<< "должно выдать Exist. Выдало: ";
    test.find("poka");
    test.remove("poka");
    std::cout<< "должно выдать Not exist. Выдало: ";
    test.find("poka");
    std::cout<< "должно выдать Exist. Выдало: ";
    test.find("privet");

    return 0;
}
