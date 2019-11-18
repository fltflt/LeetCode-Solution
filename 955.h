#pragma once
#include <iostream>
#include <queue>
using namespace std;

class CircularQueue {
public:
	/**
	 * @return:  return true if the array is full
	 */
	//�������ʼ������
	vector<int> init(int n)
	{
		for (int i = 0; i < n; i++)
			arr.push_back(0);

		return arr;

	}
	//�ж��Ƿ�Ϊ�ն���
	bool isFull()
	{
		return size == 0;

	}
	//�ж϶����Ƿ�Ϊ��
	bool isEmpty()
	{
		return size == arr.size();
	}
	//���һ��Ԫ��
	void enqueue(int element)
	{
		end = (start + size) % arr.size();
		arr[end] = element;
		size++;
	}
	//����һ��Ԫ�أ�������
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
