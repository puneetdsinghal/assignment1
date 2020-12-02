// puneet_assignment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iostream>
using namespace std;

int total(int item)
{
	int sum;
	sum = 0;

	while (item != 0)
	{
		sum = sum + (item % 10);
		item = item / 10;

	}

	if (sum == 10)
		return 1;
	else
		return 0;
}


int main()
{
	int n;
	long item = 19;
	cout << "Enter value of n to find out the nth complete number";
	cin >> n;
	int flag;
	if (n == 0)
		cout << "invalid value of n";

	else if (n == 1)
		cout << item;

	else
		for (int i = 2; i <= n; i++)
		{
			item = item + 9;
			flag = total(item);
			while (!flag)
			{
				item = item + 9;
				flag = total(item);
			}
		}

	cout << item;

	system("pause");
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
