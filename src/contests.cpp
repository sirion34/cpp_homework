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
    std::cout<< "������ ������ Exist. ������: ";
    test.find("privet");
    std::cout<< "������ ������ Not exist. ������: ";
    test.find("poka");
    test.add("poka");
    std::cout<< "������ ������ Exist. ������: ";
    test.find("poka");
    test.remove("poka");
    std::cout<< "������ ������ Not exist. ������: ";
    test.find("poka");
    std::cout<< "������ ������ Exist. ������: ";
    test.find("privet");

    return 0;
}
