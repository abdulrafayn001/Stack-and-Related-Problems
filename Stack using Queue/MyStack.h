#pragma once
#include<queue>
using namespace std;
template<typename T>
class MyStack
{
	queue<T> Q;
public:
	MyStack()
	{

	}
	void Push(int Value)
	{
		int SizeOfQueue = Q.size();

		Q.push(Value);
		
		for (int i = 0; i<SizeOfQueue; i++)
		{ 
			Q.push(Q.front()); 
			Q.pop();
		}
	}
	T Pop()
	{
		if (!Q.empty())
		{
			T Value = Q.front();
			Q.pop();
			return Value;
		}
		else
		{
			throw("Stack is Empty");
		}
	}

	T Top()
	{
		if (!Q.empty())
		{
			return Q.front();
		}
		else
			throw("Stack is Empty");
	}

	bool isEmpty()
	{
		return Q.empty();
	}
	~MyStack(){};
};

