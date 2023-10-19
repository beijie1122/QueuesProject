#include "LLQueue.h"

LLQueue::LLQueue()
{
	head = nullptr;
	tail = nullptr;
	size = 0;
}

void LLQueue::Push(int Element)
{
	Node* n = new Node(Element);

	if (head == NULL)
	{
		head = n;
		tail = n;
	}
	else
	{
		tail->next = n;
		tail = n;
	}
	size++;

	std::cout << "\nJust added this element to the Queue: " << Element << "\n";

}

void LLQueue::Front()
{
	if (IsEmpty())
	{
		std::cout << "Your Queue is empty!\n";
	}
	else
	{
		std::cout << "The Front Data is: " << head->data << "\n";
	}
	
}

void LLQueue::Pop()
{
	if (IsEmpty())
	{
		std::cout << "Cannot Pop in an empty Queue\n";
	}
	else 
	{
		std::cout << "Successfully popped the following value from the Queue: " << head->data << "\n";

		Node* Temp = head;
		head = head->next;
		Temp->next = NULL;
		delete Temp;
		size--;

		
	}

}

void LLQueue::GetSize()
{
	std::cout << "Your Queue size is: " << size << "\n";
}

bool LLQueue::IsEmpty()
{
	return size == 0;
}

LLQueue::~LLQueue()
{
}
