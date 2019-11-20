#pragma once
#include <iostream>
#include <queue>
using namespace std;


                                          /*����ʵ�ֶ���*/

/*���н�����ݶ���*/
typedef struct node {
	int data;
	struct node *next;
}node;
/*��ʽ���ж���*/
typedef struct queue_node {
	node *front;
	node *rear;
}queue_node;

/*���������*/
class duilie
{
public:
	/*��ʼ������*/
	queue_node *create_duilie()
	{
		struct queue_node *Q;
		//Q = (queue_node*)malloc(sizeof(queue_node));
		Q = new queue_node;
		//Q->front = (node*)malloc(sizeof(node));
		Q->front = new node;
		Q->front->next = NULL;//����ͷ��nextָ��ʵ�ʵ����ݽڵ�
		Q->front->data = 0;
		Q->rear = Q->front; //���п�ʱ����ͷ�Ͷ�βָ��ͬһ��λ��
		return Q;
	}
	/*�ڶ�β�������*/
	void insert_queue(queue_node *Q, int element)
	{
		node *P;
		P = new struct node;

		P->data = element;
		P->next = NULL;

		Q->rear->next = P;
		Q->rear = Q->rear->next;
	}
	/*�ڶ�ǰ����*/
	void delete_queue(queue_node *Q)
	{
		/*��ӳ��Ӷ�Ҫ����һ�����*/
		node *R=NULL;
		if (Q->front->next == NULL) 
		{
			Q->rear = Q->front;
		}
		R = Q->front->next;
		Q->front->next = R->next;
		cout <<R->data << endl;
		free(R);
	}
	/*��ѯ�����Ƿ�Ϊ��*/
	void empty_queue(queue_node *Q)
	{
		if (Q->front->next == NULL)
		{
			cout << "����Ϊ�գ�" << endl;
		}
		else
		{
			cout << "���в�Ϊ�գ�" << endl;
		}
	}

	int duilie_stl()
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
	/*��ӡ����*/
	void show_queue(queue_node *Q)
	{
		node *pcur = Q->front->next;//�ҵ����ݽڵ㿪ʼ
		while (pcur != NULL)
		{
			printf("%d\n", pcur->data);
			pcur = pcur->next;
		};
	}
};


                                          /*����ʵ��ѭ��������*/
/*ѭ������������ݽṹ*/
#define MAX_SIZE 5
struct Queue {
	int count;//����
	int front;
	int rear;
	int data[MAX_SIZE];
};
class xunhuan_duilie
{
public:
	/*��ʼ��ѭ������*/
	void Init(Queue* ptr)
	{ 
		ptr->count = 0;
		ptr->front = 0;
		ptr->rear = -1;
	}
    /*�ж϶����Ƿ���*/
	bool QueueFull(Queue* ptr) {  
		return ptr->count >= MAX_SIZE;
	}
	/*�ж϶����Ƿ��*/
	bool QueueEmpty(Queue* ptr) { 
		return ptr->count <= 0;
	}

	void Append(Queue* ptr, int item) {    //���
		if (QueueFull(ptr)) {
			cerr << "��������!" << endl;
			return;
		}
		else {
			ptr->count++;
			ptr->rear = (ptr->rear + 1) % MAX_SIZE;
			ptr->data[ptr->rear] = item;
		}
	}

	void Pop(Queue* ptr) {  //����
		if (QueueEmpty(ptr)) {
			cerr << "����Ϊ��!" << endl;
			return;
		}
		else {
			ptr->count--;
			ptr->front = (ptr->front + 1) % MAX_SIZE;
		}
	}

	int QueueSize(Queue* ptr) {    //���ض��г���
		return ptr->count;
	}

	void Show(Queue* ptr) { //��������
		if (QueueEmpty(ptr)) {
			cout << "����Ϊ��!" << endl;
			return;
		}
		else {
			cout << "���б���: ";
			int i = ptr->front;
			while (i != ptr->rear) {
				cout << ptr->data[i] << " ";
				i++;
				i = i % MAX_SIZE;
			}
			cout << ptr->data[ptr->rear] << " ";
		}
		cout << endl;
	}
};


