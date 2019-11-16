#include <iostream>
using namespace std;
#include <string>
#include <vector>

int test()
{

	vector<int> c;
	int number;
	while (cin >> number)
	{
		if (number != 0)
		{
			c.push_back(number);
		}
		else
		{
			break;
		}

	}
	/*使用迭代器来访问vector类模板，vector<int>才是数据类型*/
	vector<int>::iterator iter = c.end();
	for (vector<int>::iterator iter = c.begin(); iter != c.end(); ++iter)
	{
		cout << *iter << endl;
	}

	int *p = new int[10]();
	delete[] p;

	return 0;

}

void caozuofu()
{

	//int i = 10;
	//int a[2] = { 1,2 };
	//size_t d=sizeof(a);


	////int j = 20;
	////int k = 30;
	////int max = i > j ? i : j;
	//	///*除法*/
	//	//int a = 21 / 4;
	//	///*取模*/
	//	//int b = 21 % 4;
	//int *p = new int[10];
	//string *q = new string(10, 's');

	//delete p;
	//delete q;
	////int *p = 0;
	////int *q = 0;

	//vector<string> svec(10);
	//vector<string> *pvec1 = new vector<string>(10);

	//vector<string> *pv1 = &svec;
	//delete pvec1;

	//delete pv1;


	//double a=0;
	//a = 3.541 + 3;

	//int b = 0;
	//b = 3.541 + 3;

	//double x = 1.234567;
	//int vsal = 200;
	//vsal *= static_cast<int>(x);

	//int s;
	//while (cin >> s && s != 6)
	//	;/*空语句*/

	//int f;
	//while (cin >> f && f != 6)
	//{
	//}/*空块*/

	//int number;
	//int cnt_1 = 0; int cnt_2 = 0; int cnt_3 = 0; int cnt = 0;
	//while (cin >> number)
	//{
	//	if (number== 100)
	//		break;
	//	switch (number)
	//	{
	//	case 1:
	//		++cnt_1;
	//		break;
	//	case 2:
	//		++cnt_2;
	//		break;
	//	case 3:
	//		++cnt_3;
	//		break;
	//	default:
	//		++cnt;
	//		break;
	//	}
	//}
	//cout << "the number of 1 is" << cnt_1 << endl;
	//cout << "the number of 2 is" << cnt_2 << endl;
	//cout << "the number of 3 is" << cnt_3 << endl;
	//cout << "the number of other is" << cnt << endl;


	//do while 练习，每日一练，do while 循环变量必须定义在do之前
	string x;
	do
	{
		int number1;
		int number2;
		cout << "please input one unmber:" << endl;
		cin >> number1;
		cout << "please input other unmber:" << endl;
		cin >> number2;
		cout << "the sum of the two input unmber is:" << number1 + number2 << endl;
		cout << "more?(yes/no)" << endl;
		cin >> x;

	} while (!x.empty() && x[0] != 'n');
}

void brake_lianxi()
{
	/*break 只能出现在循环和switch语句中，break退出当前执行语句*/
	/*continue 导致当次循环提前结束，对于for循环，继续求解表达式，对于while语句，继续求解循环条件*/
	vector<int> vec = {1,2,3};
	vector<int>::iterator iter = vec.begin();
	while (iter != vec.end())
		if (*iter == 2)
			throw runtime_error("please check the input:");
		else
			++iter;
}





