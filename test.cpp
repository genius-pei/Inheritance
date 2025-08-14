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

//class Person
//{
////protected:
//public:
//	string _name = "张三"; // 姓名
//	string _sex; // 性别
//	int _age; // 年龄
//	void printP()
//	{
//		cout << this->_name << endl;
//		cout << this->_sex << endl;
//		cout << this->_age << endl;
//	}
//};
//
//class Student : public Person
//{
//public:
//	int _Num; // 学号
//	void printS()
//	{
//		printP();
//		cout << this->_Num << endl;
//	}
//};
//
//int main()
//{
//	Person p;
//	Student s;
//	//cout << s._name << endl;
//	//cout << s._Num << endl;
//	//cout << p._Num << endl;
//	s.printS();
//}
//int main()
//{
//	int a = 1;
//	const double& d = a;
//
//	string s1 = "11111";
//	const string& s2 = "11111";
//
//	Student sobj;
////	 1.派生类对象可以赋值给基类的指针/引用
////	Person* pp = &sobj;
////	Person& rp = sobj;
////	rp._name = "李四";
////
////	 生类对象可以赋值给基类的对象是通过调用后面会讲解的基类的拷贝构造完成的
//	Person pobj = sobj;
//
//	return 0;
//}
// 


class Person
{
public:
	string _name = "小李子"; // 姓名
	int _num = 111; // 身份证号
	void Print()
	{
		cout << " 姓名:" << _name << endl;
		cout << " 身份证号:" << _num << endl;
	}
};

class Student : public Person
{
public:
	void Print()
	{
		cout << " 姓名:" << _name << endl;
		cout <<" 学号:"<< _num << endl;//优先访问子类
		cout <<" 身份证号:"<< Person::_num << endl;
	}
protected:
	int _num = 999; // 学号
};

int main()
{
	Student s1;
	s1.Print();
	s1.Person::Print();

	return 0;
};



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
//	string _name; // 姓名
//};
//
//class Student : public Person
//{
//	 默认成员函数 - 规则高度相似
//	 两份部分分开处理：
//	 1、基类成员(整体，调用基类构造)
//	 2、派生类成员（跟类和对象一样）
//public:
//	Student(const char* name, int num, const char* address)
//		: Person(name)
//		,_num(num)
//		,_address(address)
//	{
//		 一般都要自己写
//	}
//	
//	Student(const Student& s)
//		:Person(s)
//		,_num(s._num)
//		,_address(s._address)
//	{
//		 编译默认生成的就够用了
//		 存在深拷贝时，才自己写
//	}
//
//	Student& operator=(const Student& s)
//	{
//		 编译默认生成的就够用了
//		 存在深拷贝时，才自己写
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
//	 析构函数名字因为后续多态(重写)章节原因，会被处理成destructor
//	 所以派生类和基类析构构成隐藏关系
//	~Student()
//	{
//		 Person::~Person();
//	} // 自动调用父类析构, 才能保证先子后父的析构顺序
//
//	 派生类析构调用后，会自动调用父类析构，所以自己实现析构时不需要显示调用
//	 构造初始化，先父类后子。析构清理资源，先子后父。
//protected:
//	int _num; //学号
//	string _address;
//};
//
//int main()
//{
//	Student s1("张三", 1, "西安曲江");
//	Student s2(s1);
//
//	/*Student s3("李四", 2, "西安高新");
//	s1 = s3;*/
//
//	return 0;
//}
//namespace yiming
//{
//	
//	template<class T>
//	class stack : public std::vector<T>
//	{
//	public:
//		void push(const T& x)
//		{
//			// 基类是类模板时，需要指定⼀下类域， 
//// 因为stack<int>实例化时，也实例化vector<int>了 
// // 但是模版是按需实例化，push_back等成员函数未实例化，所以找不到 
//			vector<T>::push_back(x);
//			/*push_back(x);*/
//		}
//		void pop()
//		{
//			vector<T>::pop_back();
//		}
//		const T& top()
//		{
//			return vector<T>::back();
//		}
//		bool empty()
//		{
//			return vector<T>::empty();
//		}
//	};
//}
//int main()
//{
//	yiming::stack<int> st;
//	st.push(1);
//	st.push(2);
//	st.push(3);
//	while (!st.empty())
//	{
//		cout << st.top() << " ";
//		st.pop();
//	}
//	return 0;
//}
//class Person
//{
//protected:
//	string _name; // 姓名 
//	string _sex; // 性别 
//	int _age; // 年龄 
//};
//class Student : public Person
//{
//public:
//	int _No; // 学号 
//};
//int main()
//{
//	Student sobj;
//	// 1.派⽣类对象可以赋值给基类的指针/引⽤ 
//	Person* pp = &sobj;
//	Person& rp = sobj;
//
//	// ⽣类对象可以赋值给基类的对象是通过调⽤后⾯会讲解的基类的拷⻉构造完成的 
//	Person pobj = sobj;
//
//	//2.基类对象不能赋值给派⽣类对象，这⾥会编译报错 
//	sobj = pobj;
//
//	return 0;
//}
