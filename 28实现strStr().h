#pragma once
#include<string>
using namespace std;
#include <iostream>


class Solution {
public:
	/**
	 * @param source:
	 * @param target:
	 * @return: return the index
	 */
	int strStr(string haystack, string needle)
	{
		int sLen = haystack.size();
		int pLen = needle.size();
		int i = 0;
		int j = 0;

		while (i < sLen && j < pLen)
		{
			if (haystack[i] == needle[j])
			{
				//①如果当前字符匹配成功（即S[i] == P[j]），则i++，j++    
				i++;
				j++;
			}
			else
			{
				//②如果失配（即S[i]! = P[j]），令i = i - (j - 1)，j = 0    
				i = i - j + 1;
				j = 0;
			}
		}
		//若匹配成功，返回字符串target在字符串source中的位置，否则返回-1
		if (j == pLen)
		{
			return i - j;
		}
		else
		{
			return -1;
		}
	}
};
