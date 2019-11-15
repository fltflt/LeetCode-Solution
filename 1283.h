#pragma once

#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
	/**
	 * @param s: a string
	 * @return: return a string
	 */
	string reverseString(string &s)
	{
		string str;
		for (int i = s.size()-1; i >= 0; i--)
		{
			str += s[i];
		}
		return str;
	};
};

