#pragma once
#include <iostream>
using namespace std;
#include <string>

class Solution {
public:
	/**
	 * @param source:
	 * @param target:
	 * @return: return the index
	 */

	/*方法一、暴力搜索*/
	int strStr(string &source, string &target)
	{
		int sLen = source.size();
		int pLen = target.size();
		int i = 0;
		int j = 0;

		while (i < sLen && j < pLen)
		{
			if (source[i] == target[j])
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

	void GetNext(string &target, int next[])
	{
		int pLen = target.size();
		next[0] = -1;
		int k = -1;
		int j = 0;
		while (j < pLen - 1)
		{
			//p[k]表示前缀，p[j]表示后缀
			if (k == -1 || target[j] == target[k])
			{
				++k;
				++j;
				next[j] = k;
			}
			else
			{
				k = next[k];
			}
		}
	}

	/*方法二、KMP字符串匹配算法*/
	int KmpSearch(string &source, string &target)
	{
		int i = 0;
		int j = 0;
		int sLen = source.size();
		int pLen = target.size();
		/*求next数组的值*/
		int next[100];
		GetNext(target, next);

		while (i < sLen && j < pLen)
		{
			//①如果j = -1，或者当前字符匹配成功（即S[i] == P[j]），都令i++，j++    
			if (j == -1 || source[i] == target[j])
			{
				i++;
				j++;
			}
			else
			{
				//②如果j != -1，且当前字符匹配失败（即S[i] != P[j]），则令 i 不变，j = next[j]    
				//next[j]即为j所对应的next值      
				j = next[j];
			}
		}
		if (j == pLen)
			return i - j;
		else
			return -1;
	}
};


/*主函数*/
//#include "pch.h"
//
//#include <iostream>
//using namespace std;
//#include <string>
//
//#include "13.h"
//class Solution;
//Solution function;
//int main()
//{
//	string source("abcdabcdefg");
//	string target("bcd");
//	int index1 = function.KmpSearch(source, target);
//	int index2 = function.strStr(source, target);
//	cout << index1 << endl;
//	cout << index2 << endl;
//}
