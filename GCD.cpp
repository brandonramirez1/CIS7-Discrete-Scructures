﻿// GCD.cpp : Defines the entry point for the console application.
//Brandon Ramirez
// Assignment #6

#include "stdafx.h"
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;




int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}


int main()
{
	
	char rerun;
	do 
	{
		int a = 0;
		int b = 0;
	

		cout << "Enter a integer \n";
		cin >> a;

		if (a <= 0)
		{
			cout << "This is not an integer. Try again \n";
			cin >> a;

		}
		cout << "Enter another integer \n";
		cin >> b;
		if (b <= 0)
		{
			cout << "This is not an integer. Try again \n";
			cin >> b;
		}
		
		auto start = high_resolution_clock::now();
		
		printf("GCD of %d and %d is %d \n", a, b, gcd(a, b));
		
		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(stop - start);

		cout << "Total time taken to calculate the GCD : " << duration.count() << " microseconds \n";

		cout << "Do you want to run this again (y/n) ? \n";
		cin >> rerun;
	} while (rerun == 'y' || rerun == 'Y');
	
	return 0;
}

