// p76.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main()
{
	char ch='a';
	int a;
	long long b;

	cout << "Enter a positive integer "<<maxInt<< " and this program will\n";
	cout << "calculate the number of partitions of the number.\n" << endl;
	do
	{
		cout << "Enter an integer 1 <= n <= " << maxInt << endl;
		cin >> a;
		cout << endl;
		if (a>0 && a<=maxInt)
		{
			cout << "processing " << a << endl;
			b=partitions(a);
			cout << "There are " << b << " partitions of n.\n" << endl;
		}
		else
		{
			cout << "\a" << "wrong number!\n";
		}
		cout << "Enter 'c' to continue\n";
		cin >> ch;
		cout << endl;
	} while (ch=='c');
    return 0;
}
