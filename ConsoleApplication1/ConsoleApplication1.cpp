// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int restart = 1;
	int max = 300, min = 1, input = 0;
	int a[5], b[5];
	int n;
	char contin;

	b[0] = 0;
	b[1] = 50;
	b[2] = 20;
	b[3] = 10;
	b[4] = 5;
	b[5] = 1;

	while (restart == 1)
	{
		//apply input and check min/max
		while (input == 0)
		{
			for (n = 0; n <= 5; n++)
			{
				a[n] = 0;
			}
			cout << "Please enter withdrawal amount --> ";
			cin >> input;
			cin.get();
			if (input < min)
			{
				cout << "Sorry the min amount you can withdraw $ " << min << endl;
				input = 0;
			}
			else if (input > max)
			{
				cout << "Sorry the max amount you can withdraw $" << max << endl;
				input = 0;
			}

		}

		//input number of bills

	
		for (n = 1; n<=5; n++)
		{
			while (input >= b[n])
			{
				input = input - b[n];
				a[n]=a[n]++;
			}
			if (input == 0)
			{
				n = 6;
			}
		}
		//print number of bills
		for (n = 1; n <= 5; n++)
		{
			if (a[n] != 0)
			{
				cout << "you have " << a[n] <<  " $ " << b[n] << " bills "<< endl;
			}
		}
		input == 0;
		cout << endl << endl;
		//restartloop
		cout << "another withdrawal? enter Y to continue " << endl;
		//get input contin
		cin >> contin;
		cin.get();
		if ((contin == 'y') || (contin == 'Y'))
		{
			restart = 1;
		}
		else
		{
			restart = 0;
		}

		cout << endl << endl;
		
	}
	cout << "Press any key to contrinue..." << endl << endl;

	cin.get();
	cin.get();
    return 0;
}

