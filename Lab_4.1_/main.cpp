//main.cpp
#include <iostream>
#include "Linear_list.h"
#include "Ring_list.h"
using namespace std;

int main()
{
	const int ARR_LEN = 4;//////
	List *arr[ARR_LEN] = //////
	{
		new Linear_list	(3,	1, 2, 3),
		new Ring_list	(2,	8, 3),
		new Linear_list	(1,	4),
		new Ring_list	(5,	33, 24, 32, 2, 3)
	};

	for (size_t i = 0; i < ARR_LEN; i++)
	{
		cout << "Count(" << typeid(*arr[i]).name() << "): " << arr[i]->Count() << endl;
		delete arr[i];
	}
}