#pragma once
class Solution {
public:
	/**
	* ����һ��������ֵ������һ������ֵ
	* @param n int���� n>9
	* @return int����
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
