#pragma once
template<typename T>
class MyStack
{
	T *Vs;
	int top;
	int Capacity;
public:
	MyStack(int S = 10)
	{
		Capacity = S;
		Vs = new T[Capacity];
		top = -1;
	}

	bool isEmpty()
	{
		return top == -1;
	}

	bool isFull()
	{
		return Capacity == (top + 1);
	}

	void Push(T Value)
	{
		if (!isFull())
		{
			Vs[++top] = Value;
		}
		else
			throw("Stack is Full");
	}


	T Top()
	{
		if (!isEmpty())
		{
			return Vs[top];
		}
		else
			throw("Stack is Empty");
	}

	bool Pop()
	{
		if (!isEmpty())
		{
			--top;
			return true;
		}
		return false;
	}

	~MyStack()
	{
		delete[]Vs;
		Vs = nullptr;
	}
};

