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

	/*����һ����������*/
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

	void GetNext(string &target, int next[])
	{
		int pLen = target.size();
		next[0] = -1;
		int k = -1;
		int j = 0;
		while (j < pLen - 1)
		{
			//p[k]��ʾǰ׺��p[j]��ʾ��׺
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

	/*��������KMP�ַ���ƥ���㷨*/
	int KmpSearch(string &source, string &target)
	{
		int i = 0;
		int j = 0;
		int sLen = source.size();
		int pLen = target.size();
		/*��next�����ֵ*/
		int next[100];
		GetNext(target, next);

		while (i < sLen && j < pLen)
		{
			//�����j = -1�����ߵ�ǰ�ַ�ƥ��ɹ�����S[i] == P[j]��������i++��j++    
			if (j == -1 || source[i] == target[j])
			{
				i++;
				j++;
			}
			else
			{
				//�����j != -1���ҵ�ǰ�ַ�ƥ��ʧ�ܣ���S[i] != P[j]�������� i ���䣬j = next[j]    
				//next[j]��Ϊj����Ӧ��nextֵ      
				j = next[j];
			}
		}
		if (j == pLen)
			return i - j;
		else
			return -1;
	}
};


/*������*/
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
