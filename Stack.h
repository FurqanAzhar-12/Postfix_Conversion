#pragma once  
#include"stackInterface.h"

template <class Type>
class stackType :public stackInterface <Type>
{
	
	int maxStackSize;
	int stackTop;
	Type* list;

public:

	stackType(int = 100);
	stackType(const stackType&);

	bool isEmpty() const;
	bool isFull() const;
	bool push(const Type);
	bool pop();
	Type top() const;

	~stackType();
};

template <class Type>
stackType<Type>::stackType(int mS) :maxStackSize(mS <= 0 ? (cout << "Size must be greater than zero! Creating default stack of size 100.\n", 100) : mS), stackTop(0),
list(new Type[maxStackSize]) {}

template <class type>
stackType<type>::stackType(const stackType& obj) :maxStackSize(obj.maxSize), stackTop(obj.stackTop), list(new type[maxStackSize]) {

	for (int i = 0; i <= stackTop; i++) {
		this->list[i] = obj.list[i];
	}

}

template <class Type>
bool stackType<Type>::isEmpty() const
{
	return stackTop == 0;
		
}

template <class Type>
bool stackType<Type>::isFull() const
{
	return maxStackSize == stackTop;
}

template <class Type>
Type stackType<Type>::top() const
{
	return isEmpty() ? (cout << "Stack is Empty, returning junk value at index 0", list[stackTop]) : list[stackTop - 1];
	
}

template <class Type>
bool stackType<Type>::push(const Type value)
{
	return isFull() ? false : list[stackTop++] = value;
}

template <class Type>
bool stackType<Type>::pop()
{
	return isEmpty() ? false : stackTop--;
}

template <class Type>
stackType<Type>::~stackType()
{
	delete[]list;
}