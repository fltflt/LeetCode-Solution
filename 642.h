#pragma once
class MovingAverage {
public:
	/*
	* @param size: An integer
	*/MovingAverage(int size)
{
	queue<int> iqueue;
	iqueue.size() = size;
	return iqueue;
}

	  /*
	   * @param val: An integer
	   * @return:
	   */
	  double next(int val)
	  {
		  while (iqueue.size() != size)
		  {
			  iqueue.push(val);
		  }



	  }
};
