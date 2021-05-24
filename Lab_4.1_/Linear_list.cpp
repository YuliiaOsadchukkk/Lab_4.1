// Linear_list.cpp
#include "Linear_list.h"

void Linear_list::AddItem(const int& val)//////
{
	int* tmp = new int[_size + 1];

	if (_size > 0)
		memcpy(tmp, _set, _size * sizeof(int));

	_set = tmp;
	_set[_size] = val;
	++_size;
}

Linear_list::Linear_list(unsigned int count, ...)//////
{
	if (count == 0)
		return;

	_set = new int[_size = count];

	for (size_t i = 0; i < _size; i++)
		_set[i] = *(((int*)&count) + 2 + i * 2);
}

unsigned int Linear_list::Count() const
{
	return _size;
}

Linear_list::~Linear_list()
{
	if (_set != nullptr)
		delete[] _set;
}
