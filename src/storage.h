#pragma once

#include <string>
#include <cstdlib>
#include <list>
#include "book.h"
#include "HashFunc.h"

template<typename T>
class Storage
{
private:
    std::vector<T> storage;
public:
//    void read();
//    void save();

    Storage();
    ~Storage();

    void add(T data);
    void remove(T data);
    void find(const T data) const;
};


template<typename T>
Storage<T>::Storage()
{
	storage.reserve(100000);
}


template<typename T>
Storage<T>::~Storage()
{
//	std::cout<<"vihod";
}

template<typename T>
void Storage<T>::add(T data)
{
    int index = getHash(data);
    storage[index] = data;
}

template<typename T>
void Storage<T>::remove(T data)
{
    int index = getHash(data);
    storage[index].erase();
}

template<typename T>
void Storage<T>::find(T data) const
{
    int index = getHash(data);
    if (data == storage[index])
        {
        	std::cout<<"Exist"<<std::endl;
        }else
        {
        	std::cout<<"Not exist"<<std::endl;
        }
}



//void Storage::save()
//{
//
//    std::string filename = "lib";
//
//    std::ofstream DATABASE(filename);
//    std::list<Book>::iterator iter_1;
//    for (int i = 0; i < 100000; ++i)
//    {
//        for (iter_1 = storage[i].begin() ;iter_1 != storage[i].end(); ++iter_1)
//        {
//            DATABASE << iter_1->data << std::endl;
//        }
//    }
//}
//void Storage::read()
//{
//    std::string filename = "lib";
//    std::ifstream DATABASE(filename);
//    std::string tmp;
//    while(DATABASE)
//    {
//        std::string str;
//        std::getline(DATABASE, str);
//        if (str != "")
//        {
//            int index = getHash(str);
//            tmp = "";
//            Book new_book;
//            new_book.hash = getHash(str);
//            new_book.data = str;
//            storage[index].push_back(new_book);
//
//        }
//
//    }
//
//}