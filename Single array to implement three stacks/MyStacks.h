#pragma once
template<typename T>
class MyStacks
{
	T *ptr;
	int a, b, c, x, y, z;
public:
	MyStacks(int m = 5, int n = 5, int o = 5)
	{
		ptr = new T[m + n + o];
		a = m;
		b = n;
		c = o;
		x = -1;
		y = a - 1;
		z = a + b - 1;
	}

	bool IsEmpty(int StackNo)
	{
		switch (StackNo)
		{
		case 0:
			return x == -1;
			break;
		case 1:
			return y == a - 1;
			break;
		case 2:
			return z == a + b - 1;
			break;
		default:
			throw("Stack Not Found");
			break;
		}
	}
	
	bool IsFull(int StackNo)
	{
		switch (StackNo)
		{
		case 0:
			return x == a - 1;
			break;
		case 1:
			return y == a + b - 1;
			break;
		case 2:
			return z == a + b + c - 1;
			break;
		default:
			throw("Stack Not Found");
			break;
		}
	}
	
	void Push(int StackNo, T Value)
	{
		switch (StackNo)
		{
		case 0:
			if (!IsFull(0))
				ptr[++x] = Value;
			break;
		case 1:
			if (!IsFull(1))
				ptr[++y] = Value;
			break;
		case 2:
			if (!IsFull(2))
				ptr[++z] = Value;
			break;
		default:
			throw("Stack is Full");
			break;
		}
	}
	
	void Pop(int StackNo)
	{
		switch (StackNo)
		{
		case 0:
			if (!IsEmpty(0))
				x--;
			break;
		case 1:
			if (!IsEmpty(1))
				y--;
			break;
		case 2:
			if (!IsEmpty(2))
				z--;
			break;
		default:
			throw("Stack Not Found");
			break;
		}
	}
	
	T Top(int StackNo)
	{
		switch (StackNo)
		{
		case 0:
			if (!IsEmpty(0))
				return ptr[x];
			break;
		case 1:
			if (!IsEmpty(1))
				return ptr[y];
			break;
		case 2:
			if (!IsEmpty(2))
				return ptr[z];
			break;
		default:
			throw("Stack Not Found");
			break;
		}
	}
	
	~MyStacks()
	{

	}
};

