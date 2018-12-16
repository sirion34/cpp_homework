#pragma once

#include <string>
#include <cstdlib>
#include <list>
#include <map>
#include "HashFunc.h"
#include <iterator>

template<typename T>
class Storage
{
private:
    std::vector<std::list<T>> storage;
public:
    void read();
    void save();

    Storage();
    ~Storage();

    void add(T data);
    void remove(T data);
    void find(const T data) const;
};


template<typename T>
Storage<T>::Storage()
{
	storage.resize(100000);
}


template<typename T>
Storage<T>::~Storage()
{
	storage.clear();
}

template<typename T>
void Storage<T>::add(T data)
{
	int index = getHash(data);
    auto result = std::find(storage[index].begin(), storage[index].end(), data);
	if (result == storage[index].end())
	{
	    storage[index].push_back(data);
	}

}

template<typename T>
void Storage<T>::remove(T data)
{
	int index = getHash(data);
	auto result = std::find(storage[index].begin(), storage[index].end(), data);
	if (result != storage[index].end())
	{
	storage[index].erase(result);
	}
}

template<typename T>
void Storage<T>::find(T data) const
{
    int index = getHash(data);
    auto result = std::find(storage[index].begin(), storage[index].end(), data);
    if (result != storage[index].end())
        {
        	std::cout<<"Exist"<<std::endl;
        }else
        {
        	std::cout<<"Not exist"<<std::endl;
        }
}


template<typename T>
void Storage<T>::save()
{

    std::string filename = "lib.txt";
    std::ofstream file(filename);
    for (int i = 0; i < 100000; ++i)
    {
    	if (!storage[i].empty())
    		{
    			while (!storage[i].empty())
    			{
    			file << storage[i].front() << "\n";
    			storage[i].front().erase();
       			}
    		}
    }
}

template<typename T>
void Storage<T>::read()
{
    std::string filename = "lib";
    std::ifstream file(filename);
    std::string tmp;
    while(file)
    {
        std::string str;
        std::getline(file, str);
        if (str != "")
        {
        	add(str);
        }
    }
}
