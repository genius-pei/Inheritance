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
namespace yiming
{
		//template<class T>
	//class vector
	//{};
	// stack和vector的关系，既符合is-a，也符合has-a
	template<class T>
	class stack : public vector<T>
	{
	public:
		void push(const T& x)
		{
			// 基类是类模板时，需要指定一下类域，
			// 否则编译报错:error C3861: “push_back”: 找不到标识符
			// 因为stack<int>实例化时，也实例化vector<int>了
			// 但是模版是按需实例化，push_back等成员函数未实例化，所以找不到
			vector<T>::push_back(x);
			//push_back(x);
		}

		void pop()
		{
			vector<T>::pop_back();
		}

		const T& top()
		{
			return vector<T>::back();
		}

		bool empty()
		{
			return vector<T>::empty();
		}
	};
}
int main()
{
	yiming::stack<int> s1;
	s1.push(1);
	s1.push(9);
	s1.push(5);
	s1.push(2);
	for (auto& e : s1)
	{
		cout << e<<" ";
	}
	cout << endl;
	return 0;
}