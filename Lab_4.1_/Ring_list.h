//Ring_list.h
#pragma once
#include "List.h"

struct  Node
{
	int x;
	Node* Next = nullptr;
};

class Ring_list : public List
{
private:
    Node *_head = nullptr, 
         *_tail = nullptr;

protected:
    void AddItem(const int& val) override;

public:              
    Ring_list(unsigned int count, ...);
    unsigned int Count() const override;
    ~Ring_list();
};
