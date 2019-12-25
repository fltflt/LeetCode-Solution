#include <iostream>
//#include "offer_9_queue.h"
#include "offer_9_stack.h"
using namespace std;


int main()
{
	CQeue temp;
	temp.appendtail(1);
	temp.appendtail(2);
	temp.appendtail(3);
	int result=temp.deletehead();
	cout << result << endl;
	int result1 = temp.deletehead();
	cout << result1 << endl;
	int result2 = temp.deletehead();
	cout << result2 << endl;
	return 0;
}
