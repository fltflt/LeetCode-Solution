#pragma once
#include <iostream>
using namespace std;

/*˼·��*/
int NumOf3(int n)
{
	int count = 0;
	while (n)
	{
		count++;
		n = n & (n - 1);
	}
	return count;
}
/*˼·��*/
int NumOf2(int n)
{
	int count = 0;
	int flag = 1;
	while (flag)
	{
		if (n&flag)
		{
			count++;
		}
		flag=flag << 1;
	}
	return count;
}
/*˼·һ*/
int NumOf1(int n)
{
	int count = 0;
	while (n)
	{
		if (n&1)
		{
			count++;
		}
		n=n>>1;	
	}
	return count;
}
/*������*/
//#pragma once
//#include <vector>
//#include <iostream>
//#include "offer_15.h"
//
//int main()
//{
//	int result1 = NumOf3(9);
//	int result2 = NumOf2(9);
//	int result3 = NumOf1(9);
//	return 0;
//}