#include<iostream>
#include"MyStack.h"

using namespace std;

int main()
{
	MyStack<int> s;
	s.Push(10);
	cout << s.Top() << endl;
	s.Push(20);
	s.Push(11);
	s.Push(99);
	while (!s.isEmpty())
	{
		cout << s.Pop() << endl;
	}
	return 0;
}