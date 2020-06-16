class Solution {
public:
	double myPow(double base, int n) {
		double res = 1.0;
		int exp = n;
		while (exp) {
			if (exp & 0x01) 
				/*exp & 0x01,结果为1，则exp为奇数，为0，则exp为偶数*/
				res *= base;
			base *= base;
			exp /= 2;
		}
		return n > 0 ? res : 1.0 / res;
	}
};
