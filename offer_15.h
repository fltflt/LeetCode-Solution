#pragma once
#include <iostream>
using namespace std;

/*思路三*/
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
/*思路二*/
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
/*思路一*/
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
/*主程序*/
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