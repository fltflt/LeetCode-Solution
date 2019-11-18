#pragma once
#include <iostream>
#include <queue>
using namespace std;

int duilie()
{
	int tmp = 0;
	queue<int> iqueue;

	// ��10, 20, 30 ���μ�����е�ĩβ
	iqueue.push(10);
	iqueue.push(20);
	iqueue.push(30);

	// ɾ�����п�ͷ��Ԫ��
	iqueue.pop();

	// �������п�ͷ��Ԫ�ء���ֵ��tmp����ɾ����Ԫ��.
	tmp = iqueue.front();
	cout << "tmp=" << tmp << endl;

	// ��40���뵽���е�ĩβ
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




//��ʽ��㶨������
typedef struct node {
	int data;
	struct node *next;
}QNode;
//��ʽ���ж�������
typedef struct queue_node {
	QNode *front;
	QNode *rear;
};

void insert_queue(queue_node *Q, int element) {
	QNode *P;
	//P = (QNode *)malloc(sizeof(QNode));//����һ���µ������ 
	P = new struct node;
	P->data = element;
	P->next = NULL;

	if (Q->rear != NULL) {      //�ڶ�β�����µĽ�� 
		Q->rear->next = P;
		Q->rear = P;
	}
	else if (Q->front == NULL) {   //����ǰ����Ϊ�գ���ʹ��PΪQ��ͷ��� 
		Q->front = P;
	}
}

void delete_queue(queue_node *Q) {
	if (Q->front== Q->rear)
	{
		cout << "����Ϊ�գ�������ɳ��Ӳ�����" << endl;
	}
	else
	{
		cout << "���ӵ�Ԫ��ֵΪ" << Q->front->data << endl;
		Q->front = Q->front->next;
	}
}


