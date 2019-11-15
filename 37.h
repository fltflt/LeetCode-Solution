#pragma once
#include <iostream>

using namespace std;
class Solution {
public:
	/**
	 * @param number: A 3-digit number.
	 * @return: Reversed number.
	 */
	int reverseInteger(int number) {
		int third_number = number/100;
		int second_number = (number % 100)/10;
		int first_number = (number % 100)%10;

		if (first_number == 0 && second_number == 0)
		{
			//std::cout <<third_number << std::endl;
			return third_number;

		}
		else if (first_number == 0)
		{
			//std::cout << second_number << third_number << std::endl;
			return second_number * 10 + third_number;

		}
		else if (first_number != 0 && second_number != 0 && third_number != 0)
		{
			//std::cout << first_number << second_number << third_number << std::endl;
			return first_number * 100 + second_number * 10 + third_number;

		}
		
		return 0;
	}
};



/*Ö÷º¯Êı*/
//#include "pch.h"
//#include <iostream>
//#include "37.h"
//
//using namespace std;
//
//Solution function;
//int main()
//{
//	int num = function.reverseInteger(321);
//	//return num;
//
//	std::cout << num << std::endl;
//
//}