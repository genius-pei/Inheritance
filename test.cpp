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
//	int _stuid;//ѧ��
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
//	// stack��vector�Ĺ�ϵ���ȷ���is-a��Ҳ����has-a
//	template<class T>
//	class stack : public vector<T>
//	{
//	public:
//		void push(const T& x)
//		{
//			// ��������ģ��ʱ����Ҫָ��һ������
//			// ������뱨��:error C3861: ��push_back��: �Ҳ�����ʶ��
//			// ��Ϊstack<int>ʵ����ʱ��Ҳʵ����vector<int>��
//			// ����ģ���ǰ���ʵ������push_back�ȳ�Ա����δʵ�����������Ҳ���
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
	string _name = "����"; // ����
	string _sex; // �Ա�
	int _age; // ����
};

class Student : public Person
{
public:
	int _Num; // ѧ��
};

int main()
{
	int a = 1;
	const double& d = a;

	string s1 = "11111";
	const string& s2 = "11111";

	Student sobj;
	// 1.�����������Ը�ֵ�������ָ��/����
	Person* pp = &sobj;
	Person& rp = sobj;
	rp._name = "����";

	// ���������Ը�ֵ������Ķ�����ͨ�����ú���ὲ��Ļ���Ŀ���������ɵ�
	Person pobj = sobj;

	return 0;
}