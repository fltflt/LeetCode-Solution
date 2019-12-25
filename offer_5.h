#pragma once
#include <cstdio>
#include <cstring>
#include <string>

/*length 为字符数组str的总容量，大于或等于字符串str的实际长度*/
void ReplaceBlank(char str[], int length)
{
	if (str == NULL && length <= 0)
		return;

	/*originalLength 为字符串str的实际长度*/
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

	/*newLength 为把空格替换成'%20'之后的长度*/
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

void Replace(char str[], int len)
{
	if (len == 0 || str == NULL)
		return;
	/*求出替换后字符串的长度*/
	int length_space = 0;
	int length_str = 0;
	int i = 0;
	while(str[i]!='\0')
	{
		length_str++;
		if (str[i] == ' ')
			length_space++;
		i++;
	}
	int new_length = length_str + length_space * 2;

	if (new_length < length_str)
		return;
	while (new_length>length_str&&length_str>=0)
	{
		if (str[length_str] == ' ')
		{
			str[new_length--] = '0';
			str[new_length--] = '2';
			str[new_length--] = '%';
		}
		else
		{
			str[new_length--] = str[length_str];
		}
		length_str--;
	}

}

/*主函数*/
//#include "pch.h"
//
//#include <iostream>
//using namespace std;
//#include <string>
//
//#include "offer_5.h"
//int main()
//{
//	/*100为字符串最大的长度*/
//	/*char str[100] = "I love you";*/
//	char str[100] = "Iyou";
//	ReplaceBlank(str, 100);
//	cout << str << endl;
//}