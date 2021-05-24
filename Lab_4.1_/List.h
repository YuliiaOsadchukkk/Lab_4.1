// List.h
#pragma once
#include <iostream>
#include <typeinfo>

using namespace std;

class List abstract
{
protected:
	virtual void AddItem(const int& val) = 0;

public:
	virtual unsigned int Count() const = 0;
};
