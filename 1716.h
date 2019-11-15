#pragma once

#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
	/**
	 * @param S: a string
	 * @return: the minimum number
	 */
	int minFlipsMonoIncr(string &S)
	{
		int num2=0;
		for (int i = 0; i < S.size(); i++)
		{
			if (S[i] == '1')
			{
				num2= num2 + 1;
			}

		}

		int num1 = 0;
		for (int j = 0; j <S.size()-1 ; j++)
		{
			if (S[j]=='1')
			{
				if (S[j + 1] == '0')
				{
					S[j + 1] = '1';
					num1 = num1 + 1;
				}			
			}			
		}
		
		if (num1 <= num2)
		{
			return num1;
		}
		else
		{
			return num2;
		}

		
	}
};
