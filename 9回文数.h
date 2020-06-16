#pragma once
#include <vector>
using namespace std;
class Solution {
public:
	bool isPalindrome(int x)
	{
		if (x < 0)
		{
			return false;
		}
		if (x == 0)
		{
			return true;
		}
		vector<int> num;
		while (x != 0)
		{
			int tmp = x % 10;
			num.push_back(tmp);
			x = x / 10;
		}
		for (int i = 0; i < num.size(); i++)
		{
			if (num[i] != num[num.size() - i - 1])
			{
				return false;

			}
		}
		return true;


	}

	bool isPalindrome_new(int x) {
		long y = 0; int quo = x;
		while (quo) {
			y = y * 10 + quo % 10;
			quo /= 10;
		}
		return x == y && x >= 0;
	}

};
