#pragma once

#include <string>
#include <vector>
#include <list>


std::string itos(int n)
{
   const int max_size = std::numeric_limits<int>::digits10 + 2;
   char buffer[max_size] = {0};
   sprintf(buffer, "%d", n);
   return std::string(buffer);
}


template <class Type>
int getHash(Type data)
{
    long long int pass = 0;
    	double e = 2.71;
    	for (int i = 0; i < data.length(); ++i)
    	{
    		pass += e*data[i];
    	}
    return (int)pass;

}
