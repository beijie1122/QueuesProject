#include <iostream>
#include "Queue.h"
#include "Node.h"
#include "LLQueue.h"
#include <queue>
#include <stack>


int main()
{

	Queue TestQueue;

	TestQueue.Push(20);

	TestQueue.Push(21);

	TestQueue.Push(22);

	TestQueue.Push(23);

	TestQueue.Push(24);

	TestQueue.Push(25);

	TestQueue.Push(35);

	TestQueue.Top();

	TestQueue.Pop();

	TestQueue.Pop();

	TestQueue.Pop();

	TestQueue.Pop();

	TestQueue.Top();

	LLQueue LLQueue;

	LLQueue.Push(255);

	LLQueue.Push(400);

	LLQueue.Push(345);

	LLQueue.Pop();

	LLQueue.GetSize();

	std::queue<int> ImbeddedQueue;

	for (size_t i = 0; i < 5; i++)
	{
		ImbeddedQueue.push(i * 2);
	}

	std:: cout << ImbeddedQueue.front() << "\n";
	//ImbeddedQueue.pop();
	//ImbeddedQueue.pop();
	std::cout << ImbeddedQueue.front() << "\n";
	std::cout << ImbeddedQueue.size() << "\n";

	int ReverseQueueValue;

	int UnitsToBeReversed = ImbeddedQueue.size();

	std::stack<int> ReverseQueueStack;

	std::queue<int> PostReverseQueue;

	for (size_t i = 0; i < UnitsToBeReversed;i++)
	{
		ReverseQueueValue = ImbeddedQueue.front();
		ReverseQueueStack.push(ReverseQueueValue);
		ImbeddedQueue.pop();
	}

	for (size_t i = 0; i < UnitsToBeReversed; i++)
	{
		ReverseQueueValue = ReverseQueueStack.top();
		PostReverseQueue.push(ReverseQueueValue);
		ReverseQueueStack.pop();
	}

	std::cout << PostReverseQueue.front();



	return 0;
}