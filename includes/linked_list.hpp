#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

template<class T>
class LinkedListElement
{
public:
	LinkedListElement (const T &data); 
	~LinkedListElement();

	LinkedListElement *getNext();
	void setNext(LinkedListElement const *elem);
	const T& Value();
	void setValue(T const *data);

private:
	LinkedListElement *next_;
	T data_;

};


#endif // LINKED_LIST_HPP

