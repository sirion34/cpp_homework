#pragma once

#include <string>
#include <vector>
#include <list>


template <typename Type>
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

template <>
int getHash<std::string>(const std::string data)
{
    long long int pass = 0;
    	double e = 2.71;
    	for (int i = 0; i < data.length(); ++i)
    	{
    		pass += e*data[i];
    	}
    	pass%=100000;
    return (int)pass;
}

