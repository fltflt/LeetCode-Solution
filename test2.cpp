#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<numeric>
#include "6.h"
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
	mapStudent.insert(pair <long long int, string >(201822010824, "������"));

	mapStudent.insert(pair<long long int, string>(201822010840, "������"));

	mapStudent.insert(pair<long long int, string>(201822010830, "����"));



	int nSize = mapStudent.size();
	map<long long int, string>::iterator iter1 = mapStudent.find(201822010824);
	if (iter1 != mapStudent.end())
		cout << "201822010824��Ӧ������Ϊ" << iter1->second << endl;

	mapStudent.erase(iter1);

	map<long long int, string>::iterator iter;

	for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
		cout << iter->first << " " << iter->second << endl;

	mapStudent.erase(mapStudent.begin(), mapStudent.end());
}
static void set_operator()
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


//void test_1()
//{
//	class solve_1734 solve_1734_function;
//	vector<int> A = { 3,1,2,4 };
//	int sum = solve_1734_function.sumSubarrayMins(A);
//
//	vector<string> vec2;
//	vec2 = { "aa","aa","bb","bb","cc","dd" };
//	vector<string>::iterator iter = unique(vec2.begin(), vec2.end());
//	vec2.erase(iter, vec2.end());
//
//	vector<int> vec;
//	cout << "please input the number" << endl;
//	int number;
//	cin >> number;
//	vector<int>::iterator iter1 = find(vec.begin(), vec.end(), number);
//	cout << "the number " << number << (iter1 == vec.end() ? " is not present" : " is present") << endl;
//
//	cout << accumulate(vec.begin(), vec.end(), 0) << endl;
//	fill(vec.begin(), vec.end(), 1);
//	fill_n(vec2.begin(), 3, 0);
//	cout << accumulate(vec.begin(), vec.end(), 0) << endl;
//}

class CExample
{
public:
	int a;
	float b;
	//���캯����ʼ���б�
	CExample() : a(10), b(22)
	{};
	//���캯���ڲ���ֵ
	CExample& example_test1()
	{
		return *this;
	}
	CExample& example_test2()
	{
		return *this;
	};
	
};

class Box
{
	double width;
public:
	friend void printWidth(Box box);
	// ��Ա��������
	void setWidth(double wid)
	{
		width = wid;
	}
};

// ��ע�⣺printWidth() �����κ���ĳ�Ա����
void printWidth(Box box)
{
	/* ��Ϊ printWidth() �� Box ����Ԫ��������ֱ�ӷ��ʸ�����κγ�Ա */
	cout << "Width of box : " << box.width << endl;
}

class Point
{
public:
	void init()
	{
	}
	static void output()
	{
	}
};
// �����������
int test1()
{
	Box box;

	// ʹ�ó�Ա�������ÿ��
	box.setWidth(10.0);

	// ʹ����Ԫ����������
	printWidth(box);

	//	CExample item;
//	item.example_test2();
	Point itrr;
	itrr.init();
	Point::output();
	return 0;
}







