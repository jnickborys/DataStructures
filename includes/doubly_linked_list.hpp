#ifndef DOUBLY_LINKED_LIST_HPP
#define DOUBLY_LINKED_LIST_HPP

template <class T>
class DoublyLinkedElement
{
public:
	DoublyLinkedElement (T const &data);
	~DoublyLinkedElement();

	DoublyLinkedList *getNext();
	const T& Value();
	void setValue(T& const data);
	void setNext(DoublyLinkedElement const *elem);

private:
	DoublyLinkedElement *next_;
	T data_;
};

#endif // DOUBLY_LINKED_LIST_HPP
