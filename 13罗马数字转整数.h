#pragma once
#include<String>
using namespace std;

class Solution {
public:
	int romanToInt(string s)
	{
		int count_IV = 0;
		int count_IX = 0;
		int count_XL = 0;
		int count_XC = 0;
		int count_CD = 0;
		int count_CM = 0;

		int count_I = 0;
		int count_V = 0;
		int count_X = 0;
		int count_L = 0;
		int count_C = 0;
		int count_D = 0;
		int count_M = 0;
		for (int i=0;i<s.size();i++)
		{
			if (s[i]=='I'&&s[i + 1]=='V')
			{
				count_IV++;
			}
			if (s[i] == 'I'&&s[i + 1] == 'X')
			{
				count_IX++;
			}
			if (s[i] == 'X'&&s[i + 1] == 'L')
			{
				count_XL++;
			}
			if (s[i] == 'X'&&s[i + 1] == 'C')
			{
				count_XC++;
			}
			if (s[i] == 'C'&&s[i + 1] == 'D')
			{
				count_CD++;
			}
			if (s[i] == 'C'&&s[i + 1] == 'M')
			{
				count_CM++;
			}



			if (s[i] == 'I')
			{
				count_I++;
			}
			if (s[i] == 'V')
			{
				count_V++;
			}
			if (s[i] == 'X')
			{
				count_X++;
			}
			if (s[i] == 'L')
			{
				count_L++;
			}
			if (s[i] == 'C')
			{
				count_C++;
			}
			if (s[i] == 'D')
			{
				count_D++;
			}
			if (s[i] == 'M')
			{
				count_M++;
			}
		}
		count_I = count_I - count_IV - count_IX;
		count_V = count_V - count_IV;
		count_X = count_X - count_IX - count_XC - count_XL;
		count_L = count_L - count_XL;
		count_C = count_C - count_CD - count_CM- count_XC;
		count_D = count_D - count_CD;
		count_M = count_M - count_CM;

		int tmp = count_I * 1 + count_V * 5 + count_X * 10 + count_L * 50 + count_C * 100 + count_D * 500 + count_M * 1000
			+ count_IV * 4 + count_IX * 9 + count_XL * 40 + count_XC * 90 + count_CD * 400 + count_CM * 900;

		return tmp;


	}
};
