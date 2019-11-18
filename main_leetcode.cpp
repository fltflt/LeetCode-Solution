#include <iostream>
using namespace std;
#include "955.h"

class CircularQueue;
CircularQueue function;
int main()
{
	vector<int>arr = function.init(5);
	bool a=function.isEmpty();
	cout << a << endl;

	function.enqueue(3);
	function.enqueue(4);
	function.enqueue(5);
	function.dequeue();

}




