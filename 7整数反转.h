#pragma once
using namespace std;
#include<cmath>


class Solution {
public:
	int reverse(int x) {
		if (x / 10 == 0) return x; //ƽ���������x��[-9,9]����ֱ�ӷ����䱾��
		int y = 0;
		while (x)
		{


			if (y > INT_MAX / 10 || y < INT_MIN / 10) //���
				return 0;
			y *= 10;
			y += x % 10; //ȡ��x�ĸ�λ������y�жԳƵ�λ��
			x /= 10;   //ȥ��x�ĸ�λ
		}
		return y;
	}
};

