#pragma once
#include <cstdio>
#include <cstring>
#include <string>

/*length Ϊ�ַ�����str�������������ڻ�����ַ���str��ʵ�ʳ���*/
void ReplaceBlank(char str[], int length)
{
	if (str == nullptr && length <= 0)
		return;

	/*originalLength Ϊ�ַ���str��ʵ�ʳ���*/
	int originalLength = 0;
	int numberOfBlank = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		++originalLength;

		if (str[i] == ' ')
			++numberOfBlank;

		++i;
	}

	/*newLength Ϊ�ѿո��滻��'%20'֮��ĳ���*/
	int newLength = originalLength + numberOfBlank * 2;
	if (newLength > length)
		return;

	int indexOfOriginal = originalLength;
	int indexOfNew = newLength;
	while (indexOfOriginal >= 0 && indexOfNew > indexOfOriginal)
	{
		if (str[indexOfOriginal] == ' ')
		{
			str[indexOfNew--] = '0';
			str[indexOfNew--] = '2';
			str[indexOfNew--] = '%';
		}
		else
		{
			str[indexOfNew--] = str[indexOfOriginal];
		}

		--indexOfOriginal;
	}
};

/*������*/
//#include "pch.h"
//
//#include <iostream>
//using namespace std;
//#include <string>
//
//#include "offer_5.h"
//int main()
//{
//	/*100Ϊ�ַ������ĳ���*/
//	/*char str[100] = "I love you";*/
//	char str[100] = "Iyou";
//	ReplaceBlank(str, 100);
//	cout << str << endl;
//}