#include<iostream>
#include"MyStack.h"
using namespace std;

int main()
{
	MyStack<int> T;
	T.Push(1);
	//T.Push(0);
	T.Push(6);
	T.Push(11);
	
	T.Push(-5);
	
	T.Pop();

	cout << T.Min();
	return 0;
}