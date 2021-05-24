//Linear_list.h
#pragma once
#include "List.h"

class Linear_list : public List
{
private:
	int* _set = nullptr;
	unsigned int _size = 0;

protected:
	void AddItem(const int& val) override;

public:
	Linear_list(unsigned int count, ...);
	~Linear_list();

	unsigned int Count() const override;
};

