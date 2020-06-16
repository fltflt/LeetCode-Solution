#pragma once
#include <vector>
using namespace std;
class Solution
{
public:
	bool canPlaceFlowers(int flowerbed[], int size, int n)
	{
		int num = 0, count = 1;  //假设在数组左边添加0，以解决边界问题，令count初始为1
		for (int i = 0; i < size; i++) {
			if (flowerbed[i] == 0) {
				count++;
			}
			else {
				count = 0;
			}
			if (count == 3) {    //每连续三个0种一次花
				num++;
				count = 1;
			}
		}
		if (count == 2)
		{    //如果最后count为2而不是1，表示最后一个位置可以种花
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
