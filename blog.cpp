#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//// 基类
//class Base {
//public:
//    // 基类的默认构造函数
//    Base() {
//        cout << "Base default constructor called" << std::endl;
//    }
//};
//
//// 派生类
//class Derived : public Base {
//public:
//    // 派生类的构造函数
//    Derived() {
//       cout << "Derived constructor called" << std::endl;
//    }
//};
//
//int main() {
//    Derived d;
//    return 0;
//}

//
//// 基类
//class Base {
//public:
//    // 基类的构造函数，需要一个参数
//    Base(int value) {
//        cout << "Base constructor called with value: " << value << std::endl;
//    }
//};
//
//// 派生类
//class Derived : public Base {
//public:
//    // 派生类的构造函数，在初始化列表中显式调用基类的构造函数
//    Derived(int value)  {
//      cout << "Derived constructor called" << std::endl;
//    }
//};
//
//int main() {
//    Derived d(10);
//    return 0;
//}


//// 基类
//class Base {
//private:
//    int baseData;
//public:
//    // 基类构造函数
//    Base(int data = 0) : baseData(data) {
//        std::cout << "Base 构造函数被调用，baseData = " << baseData << std::endl;
//    }
//
//    // 基类拷贝构造函数
//    Base(const Base& other) : baseData(other.baseData) {
//        std::cout << "Base 拷贝构造函数被调用，baseData = " << baseData << std::endl;
//    }
//
//    // 基类赋值运算符重载
//    Base& operator=(const Base& other) {
//        if (this != &other) {
//            baseData = other.baseData;
//        }
//        std::cout << "Base operator= 被调用，baseData = " << baseData << std::endl;
//        return *this;
//    }
//
//    // 基类析构函数
//    ~Base() {
//        std::cout << "Base 析构函数被调用，baseData = " << baseData << std::endl;
//    }
//};
//
//// 派生类
//class Derived : public Base {
//private:
//    int derivedData;
//public:
//    // 派生类构造函数
//    Derived(int baseData, int derivedData) : Base(baseData), derivedData(derivedData) {
//        std::cout << "Derived 构造函数被调用，derivedData = " << derivedData << std::endl;
//    }
//
//    // 派生类拷贝构造函数
//    Derived(const Derived& other) : Base(other), derivedData(other.derivedData) {
//        std::cout << "Derived 拷贝构造函数被调用，derivedData = " << derivedData << std::endl;
//    }
//
//    // 派生类赋值运算符重载
//    Derived& operator=(const Derived& other) {
//        if (this != &other) {
//            // 显式调用基类的 operator=
//            Base::operator=(other);
//            derivedData = other.derivedData;
//        }
//        std::cout << "Derived operator= 被调用，derivedData = " << derivedData << std::endl;
//        return *this;
//    }
//
//    // 派生类析构函数
//    ~Derived() {
//        std::cout << "Derived 析构函数被调用，derivedData = " << derivedData << std::endl;
//    }
//};
//
//int main() {
//    // 派生类对象初始化，先调用基类构造再调用派生类构造
//    Derived d1(10, 20);
//
//    // 派生类拷贝构造函数调用基类拷贝构造函数
//    Derived d2(d1);
//
//    // 派生类 operator= 调用基类 operator=
//    Derived d3(30, 40);
//    d3 = d1;
//
//    return 0;
//}
//class Student;
//class Person
//{
//public:
//	friend void Display(const Person& p, const Student& s);
//protected:
//	string _name="yiming"; // 姓名 
//};
//class Student : public Person
//{
//	friend void Display(const Person& p, const Student& s);
//protected:
//	int _stuNum=1117; // 学号 
//};
//void Display(const Person& p, const Student& s)
//{
//	cout << p._name << endl;
//	cout << s._stuNum << endl;
//}
//int main()
//{
//	Person p;
//    Student s;
//	// 编译报错：error C2248: “Student::_stuNum”: ⽆法访问 protected 成员 
//	// 解决⽅案：Display也变成Student 的友元即可 
//	Display(p, s);
//
//	return 0;
//}


////静态成员继承
//class Person
//{
//public:
//	string _name;
//	static int _count;
//};
//int Person::_count = 0;
//class Student : public Person
//{
//protected:
//	int _stuNum;
//};
//int main()
//{
//	Person p;
//	Student s;
//	// 这⾥的运⾏结果可以看到⾮静态成员_name的地址是不⼀样的 
//	// 说明派⽣类继承下来了，⽗派⽣类对象各有⼀份 
//	cout << &p._name << endl;
//	cout << &s._name << endl;
//	// 这⾥的运⾏结果可以看到静态成员_count的地址是⼀样的 
//	// 说明派⽣类和基类共⽤同⼀份静态成员 
//	cout << &p._count << endl;
//	cout << &s._count << endl;
//	// 公有的情况下，⽗派⽣类指定类域都可以访问静态成员 
//	cout << Person::_count << endl;
//    cout << Student::_count << endl;
//	return 0;
//}
//

////多继承
//class Person
//{
//public:
//	 string _name; // 姓名 
//};
//class Student : public Person
//{
//protected:
//	int _num; //学号 
//};
//class Teacher : public Person
//{
//protected:
//	int _id; // 职⼯编号 
//};
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse; // 主修课程 
//};
//int main()
//{
//	// 编译报错：error C2385: 对“_name”的访问不明确 
//	Assistant a;
//	a._name = "peter";
//	// 需要显⽰指定访问哪个基类的成员可以解决⼆义性问题，但是数据冗余问题⽆法解决 
//	a.Student::_name = "xxx";
//	a.Teacher::_name = "yyy";
//	return 0;
//}


//虚继承

class Person
{
public:
	string _name; // 姓名 
	
};
// 使⽤虚继承Person类 
class Student : virtual public Person
{
protected:
	int _num; //学号 
};
// 使⽤虚继承Person类 
class Teacher : virtual public Person
{
protected:
	int _id; // 职⼯编号 
};
// 教授助理 
class Assistant : public Student, public Teacher
{
protected:
	string _majorCourse; // 主修课程 
};
int main()
{
	// 使⽤虚继承，可以解决数据冗余和⼆义性 
	Assistant a;
	a._name = "peter";
	cout << a._name << endl;
	return 0;
}
