#pragma once
#include <iostream>
using namespace std;

struct shuanglianbiao
{
	int data;
	shuanglianbiao *next;
	shuanglianbiao *pre;

};
class shuanglianbiaohanshu
{
   public:
	   /*����������*/
	   void create_shuanglianbiao()
	   {
		   rear=head = new shuanglianbiao;
		   head->pre = NULL;
		   head->next = NULL;
		   cout << "����������˫�����ֵ�����У�����0��������" << endl;
		   int a,x;
		   cin >> a;
		   head->data = a;
		   
		   while (true)
		   {
			   cin >> x;
			   if (x == 0)
				   break;
			   p = new shuanglianbiao;
			   p->data = x;
			   p->pre = rear;
			   rear->next = p;
			   p->next = NULL;
			   rear = p;
		   }
		   
		   cout << "����������!" << endl;
	   };
	   /*��ӡ˫������*/
	   void print_shaunglianbiao()
	   {
		   cout << "˫�������������:" << endl;
		   p = head;
		   while (p != NULL)
		   {
			   cout << p->data;
			   cout << endl;
			   p = p->next;
		   }
		   cout << endl;
	   };
	   /*��ȡ˫�����Ⱥ���*/
	   int getlength_shaunglianbiao()
	   {
		   p = head;
		   int len = 0;
		   while (p != NULL)
		   {
			   p = p->next;
			   len++;
		   }
		   return len;
	   };
	   /*����˫����Ԫ�غ���*/
	   void insert_shaunglianbiao(int len)
	   {
		   cout << "������Ҫ��������֣������У�����������λ��:" << endl;
		   int y, index;
		   cin >> y;
		   cin >> index;

		   temp = new shuanglianbiao;
		   temp->data = y;
		   if (index == 1)
		   {
			   
			   head->pre = temp;
			   
			   temp->next = head;
			   temp->pre = NULL;
			   head= temp;

		   }
		   else if (index == len)
		   {
			   p = head;
			   for (int i = 0; i < index - 1; i++)
			   {
				   p = p->next;
			   }
			   s = p->pre;
			   s->next = temp;
			   temp->pre = s;
			   p->pre = temp;
			   temp->next = p;
			   p->next = NULL;
		   }
		   else
		   {
			   p = head;
			   for (int i = 0; i < index - 1; i++)
			   {
				   p = p->next;
			   }
			   s=p->pre;
			   s->next = temp;
			   temp->pre = s;

			   temp->next = p;
			   temp = p->pre;
		   }
		   cout << "���ݲ���" << "��" << index << "λ�óɹ���" << endl;
	   };
	   /*ɾ��˫����Ԫ�غ���*/
	   void delete_shaunglianbiao(int len)
	   {
		   cout << "������Ҫɾ����λ��:" << endl;
		   int index;
		   cin >> index;
		   if(index>len)
			   cout << "��������Χ������������:" << endl;
		   p = head;
		   for (int i = 0; i < index - 1; i++)
		   {
			   p = p->next;
		   }
		   s = p->pre;
		   k = p->next;
		   s->next = k;
		   s = k->pre;
		   cout << "Ԫ��ɾ���ɹ�" << endl;
	   };
	   /*����������ĳһԪ�غ���*/
	   void find_shuanglianbiao(int len)
	   {
		   cout << "������Ҫ���ҵ�Ԫ�أ����н�������:" << endl;
		   int v;
		   cin >> v;

		   p = head;
		   int i = 0;
		   while (p->data != v)
		   {
			   p = p->next;
			   i++;
		   }
		   cout << "���ҵ�Ԫ��λ�ڵ�" << i+1 << "��λ�ã�" << endl;
		   return;
		   cout << "Ҫ���ҵ�Ԫ�ز�����������" << endl;
	   };
   private:
	   shuanglianbiao *pre,*next,data,*head,*p,*rear,*temp,*s,*k;
};

