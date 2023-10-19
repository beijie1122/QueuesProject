#pragma once
#include "Node.h"
#include <iostream>

class LLQueue
{
public:

	Node* head;
	Node* tail;

	int size;

	LLQueue();

	void Push(int Element);

	void Front();

	void Pop();

	void GetSize();

	bool IsEmpty();

	~LLQueue();


};

