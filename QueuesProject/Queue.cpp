#include "Queue.h"

Queue::Queue(int cap)
{
	arr = new int[cap];
	NextIndex = 0;
	FirstIndex = -1;
	Size = 0;
	Capacity = cap;
}

Queue::Queue()
{
	arr = new int[5];
	NextIndex = 0;
	FirstIndex = -1;
	Size = 0;
	Capacity = 5;
}

Queue::~Queue()
{

}

void Queue::Push(int PushedValue)
{
	

	if (Size == Capacity)
	{
		int j = 0;
		int* newArr = new int[2 * Capacity];
		for (size_t i = FirstIndex; i < Capacity; i++)
		{
			newArr[j] = arr[i];
			j++;
		}
		for (size_t i = 0; i < FirstIndex; i++)
		{
			newArr[j] = arr[i];
			j++;
		}
		delete[]arr;
		arr = newArr;
		FirstIndex = 0;
		NextIndex = Capacity;
		Capacity = Capacity * 2;

		std::cout << "Queue Full, made new Queue!\n";
		
	}
	else
	{
		arr[NextIndex] = PushedValue;
		NextIndex = (NextIndex + 1) % Capacity;

		if (FirstIndex == -1)
		{
			FirstIndex = 0;
		}
		Size++;
		std::cout << "Pushed Variable!\n";
	}
}

void Queue::Pop()
{
	if (IsEmpty())
	{
		std::cout << "The Queue is Empty!\n";
		return;
	}
	else
	{
		FirstIndex = (FirstIndex + 1) % Capacity;
		Size--;
		if (Size == 0)
		{
			NextIndex = 0;
			FirstIndex = -1;
		}
	}
}

int Queue::Top()
{
	if (IsEmpty())
	{
		std::cout << "Queue is empty!\n";
		return 0;
	}
	else
	{
		std::cout << "The First Value is: " << arr[FirstIndex];
		return arr[FirstIndex];
	}

}

int Queue::GetSize()
{
	std::cout << "The Size is: ";
	return Size;
}

bool Queue::IsEmpty()
{
	return Size == 0;
}
