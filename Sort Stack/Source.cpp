#include<iostream>
#include"MyStack.h"
using namespace std;

template<typename T>
void SortStack(MyStack<T> &input)
{
	MyStack<T> TempStack;

	while (!input.isEmpty())
	{
		T tmp = input.Top();
		input.Pop();
		while (!TempStack.isEmpty() && TempStack.Top() > tmp)
		{
			input.Push(TempStack.Top());
			TempStack.Pop();
		}
		TempStack.Push(tmp);
	}
	while (!TempStack.isEmpty())
	{
		input.Push(TempStack.Top());
		TempStack.Pop();
	}
		
}
int main()
{
	MyStack<int> S;
	S.Push(4);
	S.Push(6);
	S.Push(9);
	S.Push(1);
	S.Push(0);
	SortStack(S);
	while (!S.isEmpty())
	{
		cout << S.Top() << endl;
		S.Pop();
	}
}