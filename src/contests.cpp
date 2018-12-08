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
#include "book.h"
#include "HashFunc.h"
#include <list>


int main()
{
    Storage<std::string> test;
    std::cout << getHash("privet");
    test.add("privet");
    test.find("privet");

    return 0;
}
