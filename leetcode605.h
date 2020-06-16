#pragma once
#include <vector>
using namespace std;
class Solution
{
public:
	bool canPlaceFlowers(int flowerbed[], int size, int n)
	{
		int num = 0, count = 1;  //����������������0���Խ���߽����⣬��count��ʼΪ1
		for (int i = 0; i < size; i++) {
			if (flowerbed[i] == 0) {
				count++;
			}
			else {
				count = 0;
			}
			if (count == 3) {    //ÿ��������0��һ�λ�
				num++;
				count = 1;
			}
		}
		if (count == 2)
		{    //������countΪ2������1����ʾ���һ��λ�ÿ����ֻ�
			num++;
		}
		return n <= num;
	}

	bool canPlaceFlowers_2(vector<int> &flowerbed, int n)
	{
		// Write your code here
		for (int i = 0; i < flowerbed.size(); i++) {
			if ((i == 0 && flowerbed[i] == 0) || (flowerbed[i] == 0 && flowerbed[i - 1] == 0)) {
				flowerbed[i] = 1;
				n--;
			}
		}
		return n <= 0;
	}

};
