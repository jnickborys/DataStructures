#include <iostream>

template <class T>
class Node
{
public:
	Node ( const T &value ): next_( NULL ), data_( value ) {}
	~Node() {}
	
	Node *getNext() const { return next_; }
	int value() const { return data_; }
	void setNext ( Node *elem ) { next_ = elem; }
	void setValue ( const T &value ) { data_ = value; }

private:
	node *next_;
	T data_; 
};


