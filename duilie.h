#pragma once
#include <iostream>
#include <queue>
using namespace std;

int duilie()
{
	int tmp = 0;
	queue<int> iqueue;

	// 将10, 20, 30 依次加入队列的末尾
	iqueue.push(10);
	iqueue.push(20);
	iqueue.push(30);

	// 删除队列开头的元素
	iqueue.pop();

	// 将“队列开头的元素”赋值给tmp，不删除该元素.
	tmp = iqueue.front();
	cout << "tmp=" << tmp << endl;

	// 将40加入到队列的末尾
	iqueue.push(40);
	cout << "size()=" << iqueue.size() << endl;
	while (!iqueue.empty())
	{
		tmp = iqueue.front();
		cout << tmp << endl;
		iqueue.pop();
	}

	return 0;
}




//链式结点定义如下
typedef struct node {
	int data;
	struct node *next;
}QNode;
//链式队列定义如下
typedef struct queue_node {
	QNode *front;
	QNode *rear;
};

void insert_queue(queue_node *Q, int element) {
	QNode *P;
	//P = (QNode *)malloc(sizeof(QNode));//申请一个新的链结点 
	P = new struct node;
	P->data = element;
	P->next = NULL;

	if (Q->rear != NULL) {      //在队尾插入新的结点 
		Q->rear->next = P;
		Q->rear = P;
	}
	else if (Q->front == NULL) {   //若当前队列为空，则使得P为Q的头结点 
		Q->front = P;
	}
}

void delete_queue(queue_node *Q) {
	if (Q->front== Q->rear)
	{
		cout << "队列为空，不能完成出队操作！" << endl;
	}
	else
	{
		cout << "出队的元素值为" << Q->front->data << endl;
		Q->front = Q->front->next;
	}
}


