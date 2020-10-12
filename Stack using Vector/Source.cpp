#include<iostream>
#include"MyStack.h"
using namespace std;

int main()
{
	MyStack<int> MS;
	MS.Push(5);
	MS.Push(5);
	MS.Push(6);
	MS.Push(7);
	MS.Push(8);
	MS.Push(8);
	MS.Push(8);
	cout << MS.isFull() << endl;

	for (int i = 0; !MS.isEmpty(); i++)
	{
		cout << MS.Top();
		MS.Pop();
	}
	cout << endl;
	cout << MS.isEmpty();
	return 0;
}