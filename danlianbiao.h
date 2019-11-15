#pragma once

#include <iostream>
using namespace std;

struct lianbiaoshengming
{
	int data;
	lianbiaoshengming *next;

};
class Lianbiaohanshu
{
public:
	/*删除链表中某一节点函数*/
	void delete_lianbiao()
	{
		cout << "请输入要删除的位置:" << endl;
		int index;
		cin >> index;
		cout << endl;

		p = head->next;
		temp = new lianbiaoshengming;
		for (int i = 0; i < index - 1; i++)
		{
			p = p->next;
		}
		temp= p->next;
		p->next = temp->next;
		cout << "第" << index << "位置的数据删除成功！" << endl;
	};


	/*在链表中插入某一节点函数*/
	void insert_lianbiao()
	{
		cout << "请输入要插入的数字，换行输入的位置:" << endl;
		int y,index;
		cin >> y;
		cout << endl;
		cin >> index;
		cout << endl;

		temp = new lianbiaoshengming;
		p = head->next;
		for (int i = 0; i < index - 1; i++)
		{
			p = p->next;
		}
		temp->data = y;
		temp->next = p->next;
		p->next = temp;
		cout << "数据插入" << "第" << index << "位置成功！" << endl;
	};


	/*创建链表函数*/
	void create_lianbiao()
	{
		head = rear = new lianbiaoshengming;
		rear->next = NULL;
		int x;
		cout << "请按行输入数字，输入0结束链表输入:" << endl;
		while (true)
		{
			cin >> x;
			p = new lianbiaoshengming;
			if (x == 0)
				break;
			p->data = x;
			rear->next = p;
			rear = p;
		}
		rear->next = NULL;
		cout << "链表创建结束!" << endl;
	};


	/*打印链表函数*/
	void print_lianbiao()
	{	
		cout << "链表的内容如下:" << endl;
		p = head->next;
		while (p!=NULL)
		{
			cout <<p->data;
			cout << endl;
			p= p->next;
		}
		cout << endl;
	};


	/*链表长度函数*/
	int getlength()
	{
		p = head->next;
		int len = 0;
		while (p != NULL)
		{
			p = p->next;
			len++;
		}
		return len;
	};




	/*查找链表中某一元素函数*/
	void find_lianbiao(int len)
	{
		cout << "请输入要查找的元素，换行结束输入:" << endl;
		int v;
		cin >> v;
		cout << endl;

		p = head->next;
		temp = new lianbiaoshengming;
		for (int i = 2; i < len - 1; i++)
		{
			p = p->next;
			if (p->data != v)
			{
				continue;
			}

			cout << "查找的元素位于第" << i << "个位置！" << endl;
			return;
		}
		
		
		cout << "要查找的元素不存在链表中" << endl;
	};
private:
	lianbiaoshengming *head, *rear, *p,*temp;
};

