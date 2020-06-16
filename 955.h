#pragma once
#include <iostream>
#include <queue>
using namespace std;

class CircularQueue {
public:
	/**
	 * @return:  return true if the array is full
	 */
	//用数组初始化队列

	CircularQueue(int n) : arr(n,0),size(0) {}
	//判断队列是否满
	bool isFull()
	{
		return size == arr.size();
	}

	//判断队列是否空
	bool isEmpty()
	{
		return size == 0;
	}

	//入队一个元素
	void enqueue(int element)
	{
		end = (start + size) % arr.size();
		arr[end] = element;
		size++;
	}
	//出队一个元素，并返回
	int dequeue()
	{
		int result = arr[start];
		start = (start + 1) % arr.size();
		size--;
		return result;
	}
private:
	vector<int> arr;
	int size;
	int start;
	int end;

};
