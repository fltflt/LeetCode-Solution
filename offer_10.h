#pragma once
#include <iostream>
using namespace std;

long long fibo(int n)
{
	if (n <= 0)
		return 0;

	if (n == 1)
		return 1;

	return fibo(n - 1) + fibo(n - 2);
}


long long fibo_effective(int n)
{
	if (n <= 0)
		return 0;

	if (n == 1)
		return 1;

	long long fibo_b = 1;
	long long fibo_a = 1;
	long long fibo_i = 0;
	for (int i = 2; i < n; i++)
	{
		fibo_i = fibo_a + fibo_b;
		fibo_a = fibo_b;
		fibo_b = fibo_i;

	}
	return fibo_i;

}

//Ö÷º¯Êý
int main()
{
	long long result = fibo_effective(100);
	long long result1 = fibo(100);
	return 0;
}