#pragma once

#include <string>
#include <vector>
#include <list>

template <class Type>
int getHash(Type data)
{
    long long int pass = 0;
    	double e = 2.71;
    	for (int i = 0; i < 3; ++i)
    	{
    		pass += e*data[i];
    		e *= e;
    	}
    return (int)pass;
}
