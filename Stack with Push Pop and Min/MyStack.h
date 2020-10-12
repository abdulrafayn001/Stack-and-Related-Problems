#pragma once
#include<iostream>
#include<vector>
using namespace std;
template<typename T>
class MyStack
{
	vector<T> Vs;
	vector<T> Temp;
public:

	MyStack()
	{

	}

	void Push(T Value)
	{
		Vs.push_back(Value);
		if (Temp.empty() || this->Vs.back() < this->Temp.back())
		{
			Temp.push_back(Value);
		}		
	}

	T Top()
	{
		if (!Vs.empty())
		{
			return Vs.back();
		}
		else
			throw("MyStack is Empty");
	}

	void Pop()
	{
		if (!Vs.empty())
		{
			if (Top() == Temp.back())
				Temp.pop_back();
			Vs.pop_back();
		}
		else
			throw("MyStack is Empty");
	}

	bool isEmpty()
	{
		return Vs.empty();
	}

	T Min()
	{
		if (!isEmpty())
			return Temp.back();
		else
			throw("Stack is Empty");
	}
	bool isFull()
	{
		return Vs.size() == Vs.capacity();
	}

	~MyStack()
	{

	}
};