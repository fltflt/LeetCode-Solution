#pragma once
#include <iostream>
using namespace std;

#include <vector>
class Solution {
public:
	/*
	 * @param A: sorted integer array A which has m elements, but size of A is m+n
	 * @param m: An integer
	 * @param B: sorted integer array B which has n elements
	 * @param n: An integer
	 * @return: nothing
	 */
	void mergeSortedArray(int A[], int m, int B[], int n)
	{
		int tatal = m + n;
		while (m>0&&n>0)
		{
			if (A[m - 1] > B[n - 1])
			{
				A[tatal - 1] = A[m - 1];
				m--;
			}
			else if(A[m - 1] < B[n - 1])
			{
				A[tatal - 1] = B[n- 1];
				n--;
			}
			tatal--;
		}
	
	}
};

////Ö÷º¯Êý
//#include "pch.h"
//#include <iostream>
//using namespace std;
//
//#include "64.h"
//
//
//Solution function;
//int main()
//{
//	int A[] = { 1, 2, 5 };
//	int B[] = { 3, 4 };
//	int m = 3;
//	int n = 2;
//
//	cout << "carry on, lok666" << endl;
//	function.mergeSortedArray(A, m, B, n);
//	for (int k = 0; k < n + m; k++)
//	{
//		cout << A[k] << endl;
//	}
//
//}
