#pragma once

#include <string>
#include <cstdlib>
#include <list>
#include "book.h"
#include "HashFunc2.h"


class Storage
{
public:
    std::list<Book>* storage = new std::list<Book> [100000];
    void read();
    void save();
    void add(std::string data);
    void del(std::string data);
    std::string find(std::string data);
};


void Storage::read()
{
    std::string filename = "lib";
    std::ifstream DATABASE(filename);
    std::string tmp;
    const int e = 2.71;
    int tmp_hash;
    int hash;
    while(DATABASE)
    {
        std::string str;
        std::getline(DATABASE, str);
        if (str != "")
        {
            std::string tmp;
            const int e = 2.71;
            for (int i = 0; i < 3; ++i)
            {
            	tmp += e*str[i];
            }
            int index = abs((int)(getHash(tmp)));
            tmp = "";
            Book new_book;
            new_book.hash = getHash(str);
            new_book.data = str;
            storage[index].push_back(new_book);

        }

    }

}


void Storage::add(std::string data)
{
    std::string tmp;
    const int e = 2.71;
    for (int i = 0; i < 3; ++i)
    {
    	tmp += e*data[i];
    }
    int index = abs((int)(getHash(tmp)));
    Book new_book;
    new_book.hash = getHash(data);
    new_book.data = data;
    storage[index].push_back(new_book);

}


void Storage::del(std::string data)
{

    std::string tmp;
    const int e = 2.71;
    for (int i = 0; i < 3; ++i)
    {
    	tmp += e*data[i];
    }
    int index = abs((int)(getHash(tmp)));
    std::list<Book>::iterator iter_1;
    for (iter_1 = storage[index].begin() ;iter_1 != storage[index].end(); ++iter_1)
    {
        if (data == iter_1->data)
        {
            storage[index].erase(iter_1);
            break;
        }

    }


}


std::string Storage::find(std::string data)
{
    std::string tmp;
    const int e = 2.71;
    for (int i = 0; i < 3; ++i)
    {
    	tmp += e*data[i];
    }

    int index = abs((int)(getHash(tmp)));
    int hash = getHash(data);
    std::list<Book>::iterator iter_1;

    for (iter_1 = storage[index].begin() ;iter_1 != storage[index].end(); ++iter_1 )
    {
        if (hash == iter_1->hash)
        {
            std::cout << "Exist" << std::endl;
            return data;
        }

    }
}



void Storage::save()
{

    std::string filename = "lib";

    std::ofstream DATABASE(filename);
    std::list<Book>::iterator iter_1;
    for (int i = 0; i < 100000; ++i)
    {
        for (iter_1 = storage[i].begin() ;iter_1 != storage[i].end(); ++iter_1)
        {
            DATABASE << iter_1->data << std::endl;

        }


    }



}
