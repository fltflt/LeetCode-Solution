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
	quicksort(a,left, i - 1);//继续处理左边的，这里是一个递归的过程
	quicksort(a,i + 1, right);//继续处理右边的 ，这里是一个递归的过程
}


