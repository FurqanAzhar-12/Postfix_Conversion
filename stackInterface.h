#pragma once
#include <iostream>

using namespace std;

template <class T>
class stackInterface
{

public:

	virtual bool isEmpty() const = 0;
	virtual bool isFull() const = 0;
	virtual bool push(const T) = 0;
	virtual bool pop() = 0;
	virtual T top() const = 0;

};
