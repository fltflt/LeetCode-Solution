#pragma once

#include <iostream>
using namespace std;
#include <string>
class Solution {
public:
	/*
	 * @param str: A string
	 * @return: a boolean
	 */
	bool isUnique(string &str) 
	{
		for (int i = 0; i < str.size()-1; i++)
		{
			for (int j = i+1; j < str.size(); j++)
			{
				if (str[i] != str[j])
				{
					continue;
				}
				return false;
				
			}	
			
		}
		return true;
		
	}
};

//Ö÷º¯Êý
//#include "pch.h"
//#include <iostream>
//using namespace std;
//
//#include "157.h"
//
//
//Solution function;
//int main()
//{
//	string str = "abc";
//	bool result = function.isUnique(str);
//	cout << result << endl;
//}

