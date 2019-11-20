#pragma once
#include <iostream>
using namespace std;
#include <queue>
class MovingAverage {
public:
	/*
	* @param size: An integer

	*/
	MovingAverage(int size) {
		// do intialization if necessary
		m_size = size;
	}

	/*
	 * @param val: An integer
	 * @return:
	 */
	double next(int val) {
		// write your code here
		result.push(val);
		int len = result.size();
		if (len <= m_size)
		{
			sum += val;
			return sum / len;
		}
		else
		{
			sum -= result.front();
			sum += result.back();
			result.pop();
			return sum / m_size;
		}
	}
private:
	int m_size;
	queue<int> result;
	double sum;
};
