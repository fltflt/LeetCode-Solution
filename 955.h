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
	vector<int> init(int n)
	{
		for (int i = 0; i < n; i++)
			arr.push_back(0);

		return arr;

	}
	//判断是否为空队列
	bool isFull()
	{
		return size == 0;

	}
	//判断队列是否为空
	bool isEmpty()
	{
		return size == arr.size();
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
