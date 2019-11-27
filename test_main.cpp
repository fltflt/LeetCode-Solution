#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include "12.h"

int main()
{
	class MinStack stack_test;
	stack_test.push(3);

	stack_test.push(2);

	stack_test.push(1);
	cout << stack_test.min() << endl;
	cout << stack_test.pop() << endl;
	cout << stack_test.min() << endl;
	cout << stack_test.pop() << endl;
	cout << stack_test.min() << endl;

}


void test_test()
{
	vector<int> A,B;
	for (int i = 0; i < 10; i++)
	{
		A.push_back(i);
	}

	for (int i = 0; i < 5; i++)
	{
		B.push_back(i);
	}
	A.swap(B);

	for (vector<int>::iterator iter = A.begin(); iter != A.end(); iter++)
	{
		cout << *iter << endl;
	}
	A.size();
	A.reserve(50);
	A.capacity();

	while (A.size() != A.capacity())
		A.push_back(0);

	A.push_back(100);
	//A.insert(A.begin()+2, 10);
	//A.resize(16);
	//vector<int>::iterator iter = A.begin();
	//A.erase(iter,iter+7);
	//vector<int>::iterator iter1=find(A.begin(), A.end(), 9);
	//A.erase(iter1);
}