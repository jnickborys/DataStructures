#ifndef LL_HPP_
#define LL_HPP_

#include <cstddef>


template <class T>
class Elem
{
public:
	Elem(T const &data): head_(NULL), data_(data) {}
	~Elem() {}

  Elem* getNext() const { 
		return head_; 
	}
	T Value() const { 
			return this->data_; 
	}
	void setNext(Elem *elem) {
		head_ = elem; 
	}
	void setValue(T const data) {
		data_ = data;
	}

  void insertFront(Elem **head, T data) {
    Elem *l = new Elem(data);
    l->setNext(*head);
		*head = l;
		// return l;
	}
	
	T pop(Elem **pHead) {
		Elem *temp = *pHead;
		T result = temp->data_;	
		*pHead = temp->head_;
		delete temp;
		return result;
	}
	
public:
	Elem *head_;
	T data_;
};

#endif // LL_HPP_
