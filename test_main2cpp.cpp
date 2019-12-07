#include <iostream>
#include <string>
using namespace std;
#include<vector>

template <typename T>
int compare(const T& v1, const T& v2)
{
	if (v1 < v2)
		return -1;
	if (v1 > v2)
		return 1;
	return 0;
}

int test_compare()
{
	int result=compare(0, 1);
	cout << result << endl;
	string a = "hello";
	string b = "world";
	int result1 = compare(a, b);
	cout << result1 << endl;

}

int main()
{
	return 0;
}