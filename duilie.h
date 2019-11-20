#pragma once
#include <iostream>
#include <queue>
using namespace std;


                                          /*链表实现队列*/

/*队列结点数据定义*/
typedef struct node {
	int data;
	struct node *next;
}node;
/*链式队列定义*/
typedef struct queue_node {
	node *front;
	node *rear;
}queue_node;

/*链表队列类*/
class duilie
{
public:
	/*初始化队列*/
	queue_node *create_duilie()
	{
		struct queue_node *Q;
		//Q = (queue_node*)malloc(sizeof(queue_node));
		Q = new queue_node;
		//Q->front = (node*)malloc(sizeof(node));
		Q->front = new node;
		Q->front->next = NULL;//队列头的next指向实际的数据节点
		Q->front->data = 0;
		Q->rear = Q->front; //队列空时，对头和对尾指向同一个位置
		return Q;
	}
	/*在队尾插入队列*/
	void insert_queue(queue_node *Q, int element)
	{
		node *P;
		P = new struct node;

		P->data = element;
		P->next = NULL;

		Q->rear->next = P;
		Q->rear = Q->rear->next;
	}
	/*在队前出队*/
	void delete_queue(queue_node *Q)
	{
		/*入队出队都要申请一个结点*/
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
	/*查询队列是否为空*/
	void empty_queue(queue_node *Q)
	{
		if (Q->front->next == NULL)
		{
			cout << "队列为空！" << endl;
		}
		else
		{
			cout << "队列不为空！" << endl;
		}
	}

	int duilie_stl()
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
	/*打印队列*/
	void show_queue(queue_node *Q)
	{
		node *pcur = Q->front->next;//找到数据节点开始
		while (pcur != NULL)
		{
			printf("%d\n", pcur->data);
			pcur = pcur->next;
		};
	}
};


                                          /*数组实现循环队列类*/
/*循环队列类的数据结构*/
#define MAX_SIZE 5
struct Queue {
	int count;//计数
	int front;
	int rear;
	int data[MAX_SIZE];
};
class xunhuan_duilie
{
public:
	/*初始化循环队列*/
	void Init(Queue* ptr)
	{ 
		ptr->count = 0;
		ptr->front = 0;
		ptr->rear = -1;
	}
    /*判断队列是否满*/
	bool QueueFull(Queue* ptr) {  
		return ptr->count >= MAX_SIZE;
	}
	/*判断队列是否空*/
	bool QueueEmpty(Queue* ptr) { 
		return ptr->count <= 0;
	}

	void Append(Queue* ptr, int item) {    //入队
		if (QueueFull(ptr)) {
			cerr << "队列满了!" << endl;
			return;
		}
		else {
			ptr->count++;
			ptr->rear = (ptr->rear + 1) % MAX_SIZE;
			ptr->data[ptr->rear] = item;
		}
	}

	void Pop(Queue* ptr) {  //出队
		if (QueueEmpty(ptr)) {
			cerr << "队列为空!" << endl;
			return;
		}
		else {
			ptr->count--;
			ptr->front = (ptr->front + 1) % MAX_SIZE;
		}
	}

	int QueueSize(Queue* ptr) {    //返回队列长度
		return ptr->count;
	}

	void Show(Queue* ptr) { //遍历队列
		if (QueueEmpty(ptr)) {
			cout << "队列为空!" << endl;
			return;
		}
		else {
			cout << "队列遍历: ";
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


