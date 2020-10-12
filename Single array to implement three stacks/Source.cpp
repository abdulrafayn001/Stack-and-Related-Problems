#include<iostream>
#include"MyStacks.h"
using namespace std;

int main()
{
	MyStacks<int> M(3, 3, 3);
	
	M.Push(0, 1);
	M.Push(0, 3);
	M.Push(0, 9);

	M.Push(1, 0);
	M.Push(1, 11);
	M.Push(1, 14);

	M.Push(2, 99);
	M.Push(2, 112);
	M.Push(2, 147);

	while (!M.IsEmpty(0))
	{
		cout << M.Top(0) << endl;
		M.Pop(0);
	}
	cout << endl << endl;
	while (!M.IsEmpty(1))
	{
		cout << M.Top(1) << endl;
		M.Pop(1);
	}
	cout << endl << endl;
	while (!M.IsEmpty(2))
	{
		cout << M.Top(2) << endl;
		M.Pop(2);
	}
	return 0;
}