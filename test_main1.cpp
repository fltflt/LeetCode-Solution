#include <iostream>
#include <string>
using namespace std;
#include<vector>
#include "100.h"

class Student {
public:
	Student(string name = "", int age = 0, float score = 0.0f);  //普通构造函数
	Student(const Student &stu);  //拷贝构造函数（声明）
public:
	void display();
private:
	string m_name;
	int m_age;
	float m_score;
};

Student::Student(string name, int age, float score) : m_name(name), m_age(age), m_score(score) { }

//拷贝构造函数（定义）
Student::Student(const Student &stu) {
	this->m_name = stu.m_name;
	this->m_age = stu.m_age;
	this->m_score = stu.m_score;

	cout << "Copy constructor was called." << endl;
}

void Student::display() {
	cout << m_name << "的年龄是" << m_age << "，成绩是" << m_score << endl;
}

int test2() {
	Student stu1("小明", 16, 90.5);
	Student stu2 = stu1;  //调用拷贝构造函数
	Student stu3(stu1);  //调用拷贝构造函数
	stu1.display();
	stu2.display();
	stu3.display();
	vector<int> aa;

	

	return 0;
}

void test4() 
{
	vector<int> nums = { -15,-7,-6,-1,1,2,6,11,15,15 };
	Solution function;
	function.removeDuplicates1(nums);
	cout << "carry on, lok666" << endl;
}
#include "offer_4.h"
int test_offer5(int argc, char* argv[])
{
	Test1();
	Test2();
	Test3();
	Test4();
	Test5();
	Test6();
	Test7();

	return 0;
}

using namespace std;
class Animal
{
public:
	void eat() const { cout << "I eat like a generic Animal." << endl; }
	//virtual void eat() const { cout << "I eat like a generic Animal." << endl; }
	virtual ~Animal() {}
};

class Wolf : public Animal
{
public:
	void eat() const { cout << "I eat like a wolf!" << endl; }
};

class Fish : public Animal
{
public:
	void eat() const { cout << "I eat like a fish!" << endl; }
};

class GoldFish : public Fish
{
public:
	void eat() const { cout << "I eat like a goldfish!" << endl; }
};


class OtherAnimal : public Animal
{
};
int main()
{
	std::vector<Animal*> animals;
	animals.push_back(new Animal());
	animals.push_back(new Wolf());
	animals.push_back(new Fish());
	animals.push_back(new GoldFish());
	animals.push_back(new OtherAnimal());

	for (std::vector<Animal*>::const_iterator it = animals.begin();
		it != animals.end(); ++it)
	{
		(*it)->eat();
		delete *it;
	}

	return 0;
}
