#include<iostream>
#include<stack>
using namespace std;
template<typename T>
T GetMiddleValue(stack<T>& currentStack)
{
	int Size = currentStack.size();
	Size /= 2;
	stack<T> Temp;
	while (Size > 0)
	{
		Temp.push(currentStack.top());
		currentStack.pop();
		Size--;
	}
	T Mid = currentStack.top();
	currentStack.pop();
	while (!Temp.empty())
	{
		currentStack.push(Temp.top());
		Temp.pop();
	}
	return Mid;
}
template<typename T>
void PrintStack(stack<T> S)
{
	while (!S.empty())
	{
		cout << S.top() << " ";
		S.pop();
	}
}
int main()
{
	stack<int> S0;
	int x = 9, i = 0;
	while (i < x)
	{
		S0.push(i);
		i++;
	}
	PrintStack(S0);
	cout << endl;
	cout << GetMiddleValue(S0) << endl;
	PrintStack(S0);
	cout << endl;
	stack<int> S1;
	S1.push(54);
	S1.push(4);
	S1.push(6);
	S1.push(9);
	S1.push(7);
	S1.push(6);
	S1.push(9);
	S1.push(7);
	S1.push(6);
	S1.push(5);
	cout << endl;
	PrintStack(S1);
	cout << endl;
	cout << GetMiddleValue(S1) << endl;
	PrintStack(S1);
	cout << endl;
	

	return 0;
}
