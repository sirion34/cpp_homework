//#pragma once
//
//#include <string>
//#include <vector>
//#include <list>
////
////template <typename Type>
////int getHash(Type data)
////{
//////    int pass = 0;
////    Type *data_ptr = &data;
////    int id = reinterpret_cast<std::uintptr_t>(data_ptr);
//////    	double e = 2.71;
//////    	while (id != 0)
//////    	{
//////    		int hashid = id%10;
//////    		hashid *=e;
//////    		pass += hashid;
//////    		id/=10;
//////    	}
////    return (int)id;
////}
//
////template<>
//int getHash(const std::string data)
//{
//    long long int pass = 0;
//    	double e = 2.71;
//    	for (int i = 0; i < data.length(); ++i)
//    	{
//    		pass += e*data[i];
//    	}
//    return (int)pass;
//}
int getHash(const std::string data);
