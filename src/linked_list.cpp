#include "linked_list.hpp"

LinkedListElement::LinkedListElement (const T& data): next_( NULL ), data_(data) {};

LinkedListElement *LinkedListElement::getNext() { return next_; }

void LinkedListElement::setNext(LinkedListElement const *elem) { 
	this.next_ = elem;
}

T& const LinkedListElement::Value() {return data_;}

void LinkedListElement::setValue(const *data) {
	this.data_ = data;
}

