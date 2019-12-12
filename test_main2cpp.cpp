#include <iostream>
#include <string>
using namespace std;
#include<vector>

template <typename T>
int compare(const T &v1, const T &v2)
{
	if (v1 < v2)
		return -1;
	if (v1 > v2)
		return 1;
	return 0;
}

template <typename T, typename U>
int compare_different_type(const T &v1, const U &v2)
{
	if (v1 < v2)
		return -1;
	if (v1 > v2)
		return 1;
	return 0;
}

void test_compare()
{
	//int result=compare(0, 1);
	//cout << result << endl;
	/*string a = "hello";*/
	//string b = "world";
	//int result1 = compare(a, b);
	//cout << result1 << endl;
	/*string a = "hello";*/
	short si;
	int result1=compare_different_type(si, 1);
	cout << result1 << endl;

}


int test_100()
{
    const int number = 5;
	test_compare();

	for (int i = 0; i < number; i++)
	{
		if(i==2)
			continue;

	}

	int sum = 0;
	for (int i = 50; i <= 100; i++)
		sum += i;
	cout << sum << endl;

	int sum1 = 0;
	for (int i = 50; i <= 100; ++i)
		sum1 += i;
	cout << sum1 << endl;


	int num = 10;
	for (int i = num; i != -1; i--)
		cout << i << endl;

	int j = 10;
	while (j != -1)
	{
		cout << j << endl;
		j--;

	}
	
	int amount = 0, value;
	while (cin >> value)
		if (value <= 0)
			amount++;

	cout << "输入的数字中有" << amount << "个负数！" << endl;

	

	signed a = -1;
	unsigned b = -1;
	signed a = -1;
	unsigned b = 1;
	int ff;
	return 0;
	size_t n=10;
	int *p = new int[n];
	delete[] p;
}

int main()
{

	return 0;
}