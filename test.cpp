#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
//class Person
//{
//public:
//
//
//	void identity()
//	{
//		cout << "void identity()" << _name << endl;
//
//	}
//protected:
//	string _name = "LIHUA";
//	string _address;
//	string _tel;
//	int _age = 18;
//
//};
//class Student :public Person
//{
//public:
//	void studing()
//	{
//
//	}
//
//
//protected:
//	int _stuid;//学号
//};
//class Teacher :public Person
//{
//public:
//	void teaching()
//	{
//
//	}
//protected:
//	string _title;
//};
//int main()
//{
//	Student s1;
//	Teacher t1;
//	s1.identity();
//	t1.identity();
//}
//namespace yiming
//{
//		//template<class T>
//	//class vector
//	//{};
//	// stack和vector的关系，既符合is-a，也符合has-a
//	template<class T>
//	class stack : public vector<T>
//	{
//	public:
//		void push(const T& x)
//		{
//			// 基类是类模板时，需要指定一下类域，
//			// 否则编译报错:error C3861: “push_back”: 找不到标识符
//			// 因为stack<int>实例化时，也实例化vector<int>了
//			// 但是模版是按需实例化，push_back等成员函数未实例化，所以找不到
//			vector<T>::push_back(x);
//			//push_back(x);
//		}
//
//		void pop()
//		{
//			vector<T>::pop_back();
//		}
//
//		const T& top()
//		{
//			return vector<T>::back();
//		}
//
//		bool empty()
//		{
//			return vector<T>::empty();
//		}
//	};
//}
//int main()
//{
//	yiming::stack<int> s1;
//	s1.push(1);
//	s1.push(9);
//	s1.push(5);
//	s1.push(2);
//	for (auto& e : s1)
//	{
//		cout << e<<" ";
//	}
//	cout << endl;
//	return 0;
//}

class Person
{
//protected:
public:
	string _name = "张三"; // 姓名
	string _sex; // 性别
	int _age; // 年龄
};

class Student : public Person
{
public:
	int _Num; // 学号
};

int main()
{
	int a = 1;
	const double& d = a;

	string s1 = "11111";
	const string& s2 = "11111";

	Student sobj;
	// 1.派生类对象可以赋值给基类的指针/引用
	Person* pp = &sobj;
	Person& rp = sobj;
	rp._name = "李四";

	// 生类对象可以赋值给基类的对象是通过调用后面会讲解的基类的拷贝构造完成的
	Person pobj = sobj;

	return 0;
}