///*
// * List.cpp
// *
// *  Created on: 17 окт. 2018 г.
// *      Author: Gleb
// */
//
//
//#include<iostream>
////using namespace std;
//
//template<typename T>
//class List
//{
//public:
//	List();
//	~List();
//	void push_back(const T data);
//	void push_front(const T data);
//	void pop_front();
//	void insert(const T data, const int index);
//	void remove(const int index);
//	void pop_back();
//	void clear();
//	int get_size()
//	{
//		return Size;
//	}
//	T& operator[](const int index);
//private:
//
//	template<typename Type>
//	class Node
//	{
//	public:
//		Node *pNext;
//		Type data;
//		Node(Type data = Type(), Node *pNext = nullptr)
//		{
//			this->data = data;
//			this->pNext = pNext;
//		}
//	};
//	Node<T> *head;
//	int Size;
//};
//
//template<typename T>
//List<T>::List()
//{
//	Size = 0;
//	head = nullptr;
//}
//
//template<typename T>
//List<T>::~List()
//{
//	clear();
//}
//
//template<typename T>
//void List<T>::push_back(T data)
//{
//	if(head == nullptr)
//	{
//		head = new Node<T>(data);
//	}
//	else
//	{
//		Node<T>* current = this->head;
//		while(current->pNext != nullptr)
//		{
//			current = current -> pNext;
//		}
//		current->pNext = new Node<T>(data);
//	}
//
//	++Size;
//}
//
//
//template<typename T>
//T&  List<T>::operator[](const int index)
//{
//	int counter = 0;
//	Node<T>* current = this->head;
//
//	while(current!=nullptr)
//	{
//		if (counter == index)
//		{
//			return current->data;
//		}
//		current = current->pNext;
//		++counter;
//	}
//}
//
//
//template<typename T>
//void List<T>::pop_front()
//{
//	Node<T>* temp = head;
//	head = head->pNext;
//	delete temp;
//	--Size;
//}
//
//template<typename T>
//void List<T>::clear()
//{
//	while (Size)
//	{
//		pop_front();
//	}
//}
//
//template<typename T>
//void List<T>::push_front(const T data)
//{
//	head = new Node<T>(data, head);
//	++Size;
//}
//
//template<typename T>
//void List<T>::insert(const T data,const int index)
//{
//	if (index == 0)
//	{
//		push_front(data);
//	}else
//	{
//		Node<T> *previous = this->head;
//
//		for (int i = 0; i < index - 1; ++i)
//		{
//			previous = previous->pNext;
//		}
//		Node<T>* newNode = new Node<T>(data, previous->pNext);
//		previous->pNext = newNode;
//		++Size;
//	}
//}
//
//template<typename T>
//void List<T>::remove(const int index)
//{
//	if (index == 0)
//	{
//		pop_front();
//	}else
//	{
//		Node<T> *previous = this->head;
//
//		for (int i = 0; i < index - 1; ++i)
//		{
//			previous = previous->pNext;
//		}
//		Node<T>* toDelete = previous->pNext;
//		previous->pNext = toDelete->pNext;
//		delete toDelete;
//		--Size;
//	}
//}
//
//template<typename T>
//void List<T>::pop_back()
//{
//	remove(Size-1);
//}
//
//int main()
//{
//	List<int> lst;
//	int asd = 230;
//	lst.push_back(asd);
//	lst.push_back(1);
//	lst.push_back(2);
//	lst.push_back(3);
//	lst.push_back(4);
//	lst.push_back(5);
//	lst.push_back(13);
//	lst.push_front(34);
//	lst.insert(228, 3);
//	lst.pop_back();
//	for(int i = 0; i < lst.get_size(); ++i)
//	{
//		std::cout<<lst[i]<<std::endl;
//	}
//
//	return 0;
//}
//
//
