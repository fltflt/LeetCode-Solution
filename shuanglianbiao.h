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
	   /*创建链表函数*/
	   void create_shuanglianbiao()
	   {
		   rear=head = new shuanglianbiao;
		   head->pre = NULL;
		   head->next = NULL;
		   cout << "请依次输入双链表的值，换行，输入0结束输入" << endl;
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
		   
		   cout << "链表创建结束!" << endl;
	   };
	   /*打印双链表函数*/
	   void print_shaunglianbiao()
	   {
		   cout << "双链表的内容如下:" << endl;
		   p = head;
		   while (p != NULL)
		   {
			   cout << p->data;
			   cout << endl;
			   p = p->next;
		   }
		   cout << endl;
	   };
	   /*获取双链表长度函数*/
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
	   /*插入双链表元素函数*/
	   void insert_shaunglianbiao(int len)
	   {
		   cout << "请输入要插入的数字，并换行，再输入插入的位置:" << endl;
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
		   cout << "数据插入" << "第" << index << "位置成功！" << endl;
	   };
	   /*删除双链表元素函数*/
	   void delete_shaunglianbiao(int len)
	   {
		   cout << "请输入要删除的位置:" << endl;
		   int index;
		   cin >> index;
		   if(index>len)
			   cout << "超出链表范围，请重新输入:" << endl;
		   p = head;
		   for (int i = 0; i < index - 1; i++)
		   {
			   p = p->next;
		   }
		   s = p->pre;
		   k = p->next;
		   s->next = k;
		   s = k->pre;
		   cout << "元素删除成功" << endl;
	   };
	   /*查找链表中某一元素函数*/
	   void find_shuanglianbiao(int len)
	   {
		   cout << "请输入要查找的元素，换行结束输入:" << endl;
		   int v;
		   cin >> v;

		   p = head;
		   int i = 0;
		   while (p->data != v)
		   {
			   p = p->next;
			   i++;
		   }
		   cout << "查找的元素位于第" << i+1 << "个位置！" << endl;
		   return;
		   cout << "要查找的元素不存在链表中" << endl;
	   };
   private:
	   shuanglianbiao *pre,*next,data,*head,*p,*rear,*temp,*s,*k;
};

