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
	void printP()
	{
		cout << this->_name << endl;
		cout << this->_sex << endl;
		cout << this->_age << endl;
	}
};

class Student : public Person
{
public:
	int _Num; // ѧ��
	void printS()
	{
		printP();
		cout << this->_Num << endl;
	}
};

int main()
{
	Person p;
	Student s;
	//cout << s._name << endl;
	//cout << s._Num << endl;
	//cout << p._Num << endl;
	s.printS();
}
//int main()
//{
//	int a = 1;
//	const double& d = a;
//
//	string s1 = "11111";
//	const string& s2 = "11111";
//
//	Student sobj;
////	 1.�����������Ը�ֵ�������ָ��/����
////	Person* pp = &sobj;
////	Person& rp = sobj;
////	rp._name = "����";
////
////	 ���������Ը�ֵ������Ķ�����ͨ�����ú���ὲ��Ļ���Ŀ���������ɵ�
//	Person pobj = sobj;
//
//	return 0;
//}
 


//class Person
//{
//protected:
//	string _name = "С����"; // ����
//	int _num = 111; // ���֤��
//};
//
//class Student : public Person
//{
//public:
//	void Print()
//	{
//		cout << " ����:" << _name << endl;
//		cout <<" ѧ��:"<< _num << endl;//���ȷ�������
//		cout <<" ���֤��:"<< Person::_num << endl;
//	}
//protected:
//	int _num = 999; // ѧ��
//};
//
//int main()
//{
//	Student s1;
//	s1.Print();
//
//	return 0;
//};



//class Person
//{
//public:
//	Person(const char* name)
//		: _name(name)
//	{
//		cout << "Person()" << endl;
//	}
//
//	Person(const Person& p)
//		: _name(p._name)
//	{
//		cout << "Person(const Person& p)" << endl;
//	}
//
//	Person& operator=(const Person& p)
//	{
//		cout << "Person operator=(const Person& p)" << endl;
//		if (this != &p)
//			_name = p._name;
//		
//		return *this;
//	}
//
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//	protected:
//	string _name; // ����
//};
//
//class Student : public Person
//{
//	 Ĭ�ϳ�Ա���� - ����߶�����
//	 ���ݲ��ַֿ�����
//	 1�������Ա(���壬���û��๹��)
//	 2���������Ա������Ͷ���һ����
//public:
//	Student(const char* name, int num, const char* address)
//		: Person(name)
//		,_num(num)
//		,_address(address)
//	{
//		 һ�㶼Ҫ�Լ�д
//	}
//	
//	Student(const Student& s)
//		:Person(s)
//		,_num(s._num)
//		,_address(s._address)
//	{
//		 ����Ĭ�����ɵľ͹�����
//		 �������ʱ�����Լ�д
//	}
//
//	Student& operator=(const Student& s)
//	{
//		 ����Ĭ�����ɵľ͹�����
//		 �������ʱ�����Լ�д
//
//		if (this != &s)
//		{
//			Person::operator=(s);
//			_num = s._num;
//			_address = s._address;
//		}
//
//		return *this;
//	}
//
//	 ��������������Ϊ������̬(��д)�½�ԭ�򣬻ᱻ�����destructor
//	 ����������ͻ��������������ع�ϵ
//	~Student()
//	{
//		 Person::~Person();
//	} // �Զ����ø�������, ���ܱ�֤���Ӻ󸸵�����˳��
//
//	 �������������ú󣬻��Զ����ø��������������Լ�ʵ������ʱ����Ҫ��ʾ����
//	 �����ʼ�����ȸ�����ӡ�����������Դ�����Ӻ󸸡�
//protected:
//	int _num; //ѧ��
//	string _address;
//};
//
//int main()
//{
//	Student s1("����", 1, "��������");
//	Student s2(s1);
//
//	/*Student s3("����", 2, "��������");
//	s1 = s3;*/
//
//	return 0;
//}