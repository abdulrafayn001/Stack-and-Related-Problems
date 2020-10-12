#pragma once
#include<vector>
#include<stack>
using namespace std;
template<typename T>
class SetOfStacks
{
	vector<stack<T>> *Stacks;
	int Capacity;
public:
	SetOfStacks(int C = 10) : Capacity(C)
	{
		Stacks = new vector<stack<T>>();
	}

	void PUSH(int Value)
	{
		if (Stacks->size() == 0)
		{
			stack<T> MyNewStack;
			MyNewStack.push(Value);
			Stacks->push_back(MyNewStack);
		}
		else
		{
			stack<T> &STK = Stacks->back();
			if (STK.size() != Capacity)
			{
				STK.push(Value);
			}
			else
			{
				stack<T> MyNewStack;
				MyNewStack.push(Value);
				Stacks->push_back(MyNewStack);
			}
		}
	}

	T POP()
	{
		if (Stacks->size() == 0)
		{
			throw("No elements in the stack\n");
		}
		else
		{
			stack<T> &STK = Stacks->back();
			if (!STK.empty())
			{
				T Temp = STK.top();
				STK.pop();
				if (STK.empty())
					Stacks->pop_back();
				return Temp;
			}
			else
			{
				Stacks->pop_back();
				this->POP();
				int cx = Stacks->capacity();
			}
		}
	}

	T POPAT(int index)
	{
		if (index < Stacks->size && index >= 0)
		{
			stack<T> STK = Stacks->at(index);
			if (!STK.empty())
			{
				T Temp = STK.top();
				STK.pop();
				return Temp;
			}
			else
			{
				throw("Stack is empty.");
			}
		}
		else
		{
			throw("Invalid index");
		}
		
	}

	bool EMPTY()
	{
		return Stacks->size() == 0;
	}
	~SetOfStacks(){};
};

