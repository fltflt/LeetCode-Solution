#pragma once
class Solution {
public:
	/**
	* 输入一个整形数值，返回一个整形值
	* @param n int整型 n>9
	* @return int整型
	*/
	int solution(int n) {
		// write code here
		if (n < 10) return 10 + n;
		int res = 0, base = 1;
		for (int i = 9; i > 1; i--) {
			while (n % i == 0) {
				res += i * base;
				base *= 10;
				n /= i;
			}
		}
		if (n > 1) return -1;
		else return res;
	}
};
