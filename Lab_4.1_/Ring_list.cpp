// Ring_list.cpp

#include "Ring_list.h"

void Ring_list::AddItem(const int& val)///
{
    Node*& destination = _tail == nullptr ? _tail : _tail->Next;
    destination = new Node{ val };

    if (_tail->Next == destination)
        _tail = destination;
    else
        _head = destination;
}

Ring_list::Ring_list(unsigned int count, ...)///
{
    if (count == 0)
        return;

    for (size_t i = 0; i < count; i++)
    {
        int tmp = *(((int *)&count) + 2 + i * 2);
        AddItem(tmp);
    }
}

unsigned int Ring_list::Count() const///
{
    unsigned int count = 0;
    Node* tmp = _head;
    while (tmp != nullptr)
    {
        count++;
        tmp = tmp->Next;
    }
    return count;
}

Ring_list::~Ring_list()
{
    Node* tmp;

    while (_head != nullptr)
    {
        tmp = _head->Next;
        delete _head;
        _head = tmp;
    }
    _tail = nullptr;

}
