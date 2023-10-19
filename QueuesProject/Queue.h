#pragma once
#include <iostream>
class Queue
{

	int* arr;

	int Size;

	int FirstIndex;

	int NextIndex;

	int Capacity;

public:

	Queue();

	Queue(int cap);

	~Queue();

	void Push(int PushedValue);

	void Pop();

	int Top();

	int GetSize();

	bool IsEmpty();

};

