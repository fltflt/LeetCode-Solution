#pragma once
#include<iostream>
using namespace std;
#include<vector>

class Solution1
{
public:
	vector<int> nextGreaterElement(vector<int> A, vector<int> B)
	{
		vector<int> res;
		int m;
		for (int i = 0; i < A.size(); i++)
		{
			for (int j = 0; j < B.size(); j++)
			{
				if (A[i] == B[j])
				{
					m = j;
					int k = m + 1;
					for (k; k < B.size();)
					{
						if (B[k] > A[i])
						{
							res.push_back(B[k]);
							break;
						}
						else
						{
							k++;
						}
					}
					if (k == B.size())
					{
						res.push_back(-1);
					}


				}
			}
		}
		return res;
	}
}; 