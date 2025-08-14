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


// 基类
class Base {
private:
    int baseData;
public:
    // 基类构造函数
    Base(int data = 0) : baseData(data) {
        std::cout << "Base 构造函数被调用，baseData = " << baseData << std::endl;
    }

    // 基类拷贝构造函数
    Base(const Base& other) : baseData(other.baseData) {
        std::cout << "Base 拷贝构造函数被调用，baseData = " << baseData << std::endl;
    }

    // 基类赋值运算符重载
    Base& operator=(const Base& other) {
        if (this != &other) {
            baseData = other.baseData;
        }
        std::cout << "Base operator= 被调用，baseData = " << baseData << std::endl;
        return *this;
    }

    // 基类析构函数
    ~Base() {
        std::cout << "Base 析构函数被调用，baseData = " << baseData << std::endl;
    }
};

// 派生类
class Derived : public Base {
private:
    int derivedData;
public:
    // 派生类构造函数
    Derived(int baseData, int derivedData) : Base(baseData), derivedData(derivedData) {
        std::cout << "Derived 构造函数被调用，derivedData = " << derivedData << std::endl;
    }

    // 派生类拷贝构造函数
    Derived(const Derived& other) : Base(other), derivedData(other.derivedData) {
        std::cout << "Derived 拷贝构造函数被调用，derivedData = " << derivedData << std::endl;
    }

    // 派生类赋值运算符重载
    Derived& operator=(const Derived& other) {
        if (this != &other) {
            // 显式调用基类的 operator=
            Base::operator=(other);
            derivedData = other.derivedData;
        }
        std::cout << "Derived operator= 被调用，derivedData = " << derivedData << std::endl;
        return *this;
    }

    // 派生类析构函数
    ~Derived() {
        std::cout << "Derived 析构函数被调用，derivedData = " << derivedData << std::endl;
    }
};

int main() {
    // 派生类对象初始化，先调用基类构造再调用派生类构造
    Derived d1(10, 20);

    // 派生类拷贝构造函数调用基类拷贝构造函数
    Derived d2(d1);

    // 派生类 operator= 调用基类 operator=
    Derived d3(30, 40);
    d3 = d1;

    return 0;
}