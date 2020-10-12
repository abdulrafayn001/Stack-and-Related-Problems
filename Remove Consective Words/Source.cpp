#include<iostream>
#include<stack>
#include<string>
#include<fstream>
using namespace std;

string* ReadFile(string fn)
{
	ifstream fin(fn);
	int NOC;
	fin >> NOC;
	NOC++;
	string *AString = new string[NOC];
	for (int i = 0; i < NOC; i++)
	{
		getline(fin, AString[i]);
		//cout << AString[i] << endl;
	}
	return AString;
}
void MATCHINGORNOT(string &s);

string RemoveConsecutiveWords(string Data);
int main()
{
	string *Data = ReadFile("data.txt");
	for (int i = 1; i < 6; i++)
	{
		string D = RemoveConsecutiveWords(Data[i]);
		if (D == "")
		{
			cout << "<Empty String> or <NULL>" << endl;
		}
		else
		{
			cout << D << endl;
		}
		
	}
	return 0;
}


string RemoveConsecutiveWords(string Data)
{
	stack<string> AllWords;
	string AWord;
	for (int i = 0; i <= Data.length(); i++)
	{
		if (Data[i] != ' ' && Data[i] != '\0')
		{
			AWord += Data[i];
		}
		else
		{
			if (AllWords.empty())
			{
				AllWords.push(AWord);

			}
			else
			{
				if (AllWords.top() == AWord)
				{
					AllWords.pop();
				}
				else
				{
					AllWords.push(AWord);
				}
			}
			AWord.clear();
		}
	}
	string Res;
	while (!AllWords.empty())
		Res += (AllWords.top() + " "), AllWords.pop();
	return Res;
}
