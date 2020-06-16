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
				//�������ǰ�ַ�ƥ��ɹ�����S[i] == P[j]������i++��j++    
				i++;
				j++;
			}
			else
			{
				//�����ʧ�䣨��S[i]! = P[j]������i = i - (j - 1)��j = 0    
				i = i - j + 1;
				j = 0;
			}
		}
		//��ƥ��ɹ��������ַ���target���ַ���source�е�λ�ã����򷵻�-1
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
