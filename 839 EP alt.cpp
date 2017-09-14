// 839 EP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

int CalW();
int main()
{

	int nrofCases = 0;
	int balance;

	scanf_s("%d", &nrofCases);
	while (nrofCases--)
	{

		balance = CalW();
		if (balance == 0)
		{
			std::cout << "" << std::endl;
			std::cout << "YES" << std::endl;
		}

		else
		{
			std::cout << "" << std::endl;
			std::cout << "NO" << std::endl;
		}

	}

	return 0;
}

int CalW()
{
	int wl, dl, wr, dr;
	scanf_s("%d %d %d %d", &wl, &dl, &wr, &dr);
	if (wl == 0)
	{
		wl = CalW();
	}
	if (wr == 0)
	{
		wr = CalW();
	}

	return ((wl*dl) - (wr * dr));





}
