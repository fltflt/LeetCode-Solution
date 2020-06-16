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

	CircularQueue(int n) : arr(n,0),size(0) {}
	//�ж϶����Ƿ���
	bool isFull()
	{
		return size == arr.size();
	}

	//�ж϶����Ƿ��
	bool isEmpty()
	{
		return size == 0;
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
