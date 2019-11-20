#include <iostream>
using namespace std;

void swap(int a, int b)
{
	int temp = b;
	b = a;
	a = temp;
};
void swap(int, int b = 10);


char *init(int hht, int wd, char bakgrnd='ddd');
void swap_copy(int &a, int &b)
{
	int temp = b;
	b = a;
	a = temp;
};
int main()
{

	int a = 2;
	int b = 3;
	swap_copy(a,b);
	cout << "a b is" << endl;
	cout << a << endl;
	cout << b << endl;

}






