#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include "12.h"
#include<map>
#include <string> 
#include<set>

void test_test()
{
	vector<int> A, B;
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
void map_operator()
{
	map<long long int, string> mapStudent;
	mapStudent.insert(pair <long long int, string >(201822010824, "冯令田"));

	mapStudent.insert(pair<long long int, string>(201822010840, "范昱琪"));

	mapStudent.insert(pair<long long int, string>(201822010830, "何鑫"));



	int nSize = mapStudent.size();
	map<long long int, string>::iterator iter1 = mapStudent.find(201822010824);
	if (iter1 != mapStudent.end())
		cout << "201822010824对应的数据为" << iter1->second << endl;

	mapStudent.erase(iter1);

	map<long long int, string>::iterator iter;

	for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
		cout << iter->first << " " << iter->second << endl;

	mapStudent.erase(mapStudent.begin(), mapStudent.end());
}
void set_operator()
{
	vector<int> vec;
	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
		vec.push_back(i);
	}
	set<int> vec_set(vec.begin(), vec.end());

	vec_set.insert(100);
	set<int>::iterator iter=vec_set.find(9);
	cout << *iter << endl;
	cout<<vec_set.count(10)<<endl;

}

int i = 0;
int main()
{

	int i = i;

}


