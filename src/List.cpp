#include<iostream>
//using namespace std;

template<typename T>
class List
{
public:
	List();
	~List();
	void push_back(T data);
private:

	template<typename T>
	class Node
	{
	public:
		Node *pNext;
		T data;
		Node(T data = T(), Node *pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};
	Node<T> *head;
	int Size;
};

template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}

template<typename T>
List<T>::~List()
{

}

template<typename T>
void List<T>::push_back(T data)
{
	if(head == nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{

	}
}

int main()
{
	List<int> lst;
	lst.push_back(5);
	return 0;
}
