// #include "./src/linked_list.cpp"
#include <cstdlib>
#include <cstddef>
#include <iostream>

#include "ll.hpp"

template<class T>
void print_list(Elem<T> *head) {
	int count(0);

	while (head) {
		std::cout << "List Element Count: " << count
							<< " List Element Value: " << head->Value() << '\n';
		head = head->getNext();
		++count;
	} 

	return;
}

template <class T>
Elem<T> *insertFront(Elem<T> *pHead, T data)
{
	Elem<T> *pTemp = new Elem<T>(data);
	pTemp->setNext(pHead);
	return pTemp;
}


int main(int argc, char const *argv[])
{
	int value(10);
	Elem<int> *pHead = new Elem<int>(1);
	pHead = insertFront(pHead, 2);
	pHead = insertFront(pHead, 3);
	pHead = insertFront(pHead, 4);
	pHead = insertFront(pHead, 5);
	pHead = insertFront(pHead, 6);
	pHead = insertFront(pHead, 7);
	pHead = insertFront(pHead, 8);
	pHead = insertFront(pHead, 9);
	pHead = insertFront(pHead, 10);

	int res(0);
	res = pHead->pop(&pHead);
	std::cout << res << '\n';
	res = pHead->pop(&pHead);
	std::cout << res << '\n';
	res = pHead->pop(&pHead);
	std::cout << res << '\n';
	/*std::cout << "This is a test\n"
						<< "The value in the list is:" 
						<< *(elem1.Value()) << '\n';
	std::cout << "List Elem: ";
	// std::cout << *(elem1.getNext()->getNext()->Value()) << '\n';*/

	// print_list(&elem1);
	// Elem<int> Elem4(10);
	pHead = insertFront(pHead, 100);

	print_list(pHead);

	return 0;
}
