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
	/*ɾ��������ĳһ�ڵ㺯��*/
	void delete_lianbiao()
	{
		cout << "������Ҫɾ����λ��:" << endl;
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
		cout << "��" << index << "λ�õ�����ɾ���ɹ���" << endl;
	};


	/*�������в���ĳһ�ڵ㺯��*/
	void insert_lianbiao()
	{
		cout << "������Ҫ��������֣����������λ��:" << endl;
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
		cout << "���ݲ���" << "��" << index << "λ�óɹ���" << endl;
	};


	/*����������*/
	void create_lianbiao()
	{
		head = rear = new lianbiaoshengming;
		rear->next = NULL;
		int x;
		cout << "�밴���������֣�����0������������:" << endl;
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
		cout << "����������!" << endl;
	};


	/*��ӡ������*/
	void print_lianbiao()
	{	
		cout << "�������������:" << endl;
		p = head->next;
		while (p!=NULL)
		{
			cout <<p->data;
			cout << endl;
			p= p->next;
		}
		cout << endl;
	};


	/*�����Ⱥ���*/
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




	/*����������ĳһԪ�غ���*/
	void find_lianbiao(int len)
	{
		cout << "������Ҫ���ҵ�Ԫ�أ����н�������:" << endl;
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

			cout << "���ҵ�Ԫ��λ�ڵ�" << i << "��λ�ã�" << endl;
			return;
		}
		
		
		cout << "Ҫ���ҵ�Ԫ�ز�����������" << endl;
	};
private:
	lianbiaoshengming *head, *rear, *p,*temp;
};

