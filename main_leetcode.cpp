#include <iostream>
using namespace std;
#include <fstream>

#include <vector>
void swap(int a, int b)
{
	int temp = b;
	b = a;
	a = temp;
};
void swap(int, int b = 10);


void read_test()
{
	int data[10];
	ifstream reader;
	reader.open("F:\\inv_flt\\1.txt", ios::out | ios::in);
	if (!reader.is_open()) // 检查文件是否成功打开 
		cout << "cannot open file." << endl;
	reader >> data[10];
	cout<< data[10] << endl;
	reader.close();
};
void swap_copy(int &a, int &b)
{
	int temp = b;
	b = a;
	a = temp;
};
int main()
{
	read_test();
	//int a = 2;
	//int b = 3;
	//swap_copy(a,b);

	//cout << a << endl;
	//cout << b << endl;

}






