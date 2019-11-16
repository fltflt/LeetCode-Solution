#include <iostream>
using namespace std;

#include <vector>

class Solution {
public:
	/**
	 * @param A: sorted integer array A
	 * @param B: sorted integer array B
	 * @return: A new sorted integer array
	 */
	vector<int> mergeSortedArray(vector<int> &A, vector<int> &B)
	{
		vector<int> C;
		int i = 0;
		int j = 0;
		for (i, j; i < A.size() && j<B.size();)
		{

			if (A[i] < B[j])
			{
				C.push_back(A[i++]);
			}
			else if (A[i] = B[j])
			{
				C.push_back(A[i++]);
				C.push_back(B[j++]);
			}
			else if (A[i] > B[j])
			{
				C.push_back(B[j++]);
			}
		}
		//若A数组长度小于B数组，则把A的后面数字push_back到C数组
		for (int m = i; m < A.size(); m++)
		{
			C.push_back(A[m]);
		}
		//若A数组长度大于B数组，则把B的后面数字push_back到C数组
		for (int h = j; h < B.size(); h++)
		{
			C.push_back(B[h]);
		}
		return C;
	}
};

                                     //////主函数/////////

//#include <iostream>
//#include <vector>
//#include "6.h"
//using namespace std;
//
//
//Solution object;
//int main()
//{
//
//	vector<int> temp1 = { 1, 2, 3,4,5 };
//	vector<int> temp2 = { 1, 2, 3, 4 };
//	vector<int> temp3;
//	temp3 = object.mergeSortedArray(temp1, temp2);
//	for (int k = 0; k < temp3.size(); k++)
//	{
//		std::cout << temp3[k] << std::endl;
//
//	}
//
//}



#pragma once
