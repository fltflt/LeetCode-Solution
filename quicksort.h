#pragma once
#include<iostream>
#include<vector>
using namespace std;
void quicksort(int a[],int left,int right)
{
	int i, j, temp;
	if (right < left)
		return;
	temp = a[left];
	i = left;
	j = right;

	while (i!=j)
	{
		while (a[j] >= temp && i < j)
			j--;
		while (a[i] <= temp && i < j)
			i++;
		if (i<j)
		{
			int t = a[i];
			a[i]= a[j];
			a[j] = t;
		}
	}
	a[left] = a[i];
	a[i] = temp;
	quicksort(a,left, i - 1);//����������ߵģ�������һ���ݹ�Ĺ���
	quicksort(a,i + 1, right);//���������ұߵ� ��������һ���ݹ�Ĺ���
}


