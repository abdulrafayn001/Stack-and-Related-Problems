#include<iostream>
#include"MyStack.h"
using namespace std;

int main()
{
	MyStack<int>M(5);
	M.Push(6);
	M.Push(7);
	M.Push(8);
	M.Push(10);
	M.Push(12);
	//M.Push(11);
	cout << M.isEmpty() << endl;
	cout << M.isFull() << endl;
	while (!M.isEmpty())
	{
		cout << M.Top() << endl;
		M.Pop();
	}
	//M.Top();
	return 0;
}