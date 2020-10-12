#include<iostream>
#include"SetOfStacks.h"
using namespace std;

int main()
{
	SetOfStacks<int> SOS(3);
	SOS.PUSH(3);
	SOS.PUSH(2);
	SOS.PUSH(1);
	// SOS.POP();
	while (!SOS.EMPTY())
	{
		cout << SOS.POP() << endl;
	}
}