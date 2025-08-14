#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//// ����
//class Base {
//public:
//    // �����Ĭ�Ϲ��캯��
//    Base() {
//        cout << "Base default constructor called" << std::endl;
//    }
//};
//
//// ������
//class Derived : public Base {
//public:
//    // ������Ĺ��캯��
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
//// ����
//class Base {
//public:
//    // ����Ĺ��캯������Ҫһ������
//    Base(int value) {
//        cout << "Base constructor called with value: " << value << std::endl;
//    }
//};
//
//// ������
//class Derived : public Base {
//public:
//    // ������Ĺ��캯�����ڳ�ʼ���б�����ʽ���û���Ĺ��캯��
//    Derived(int value)  {
//      cout << "Derived constructor called" << std::endl;
//    }
//};
//
//int main() {
//    Derived d(10);
//    return 0;
//}


// ����
class Base {
private:
    int baseData;
public:
    // ���๹�캯��
    Base(int data = 0) : baseData(data) {
        std::cout << "Base ���캯�������ã�baseData = " << baseData << std::endl;
    }

    // ���࿽�����캯��
    Base(const Base& other) : baseData(other.baseData) {
        std::cout << "Base �������캯�������ã�baseData = " << baseData << std::endl;
    }

    // ���ำֵ���������
    Base& operator=(const Base& other) {
        if (this != &other) {
            baseData = other.baseData;
        }
        std::cout << "Base operator= �����ã�baseData = " << baseData << std::endl;
        return *this;
    }

    // ������������
    ~Base() {
        std::cout << "Base �������������ã�baseData = " << baseData << std::endl;
    }
};

// ������
class Derived : public Base {
private:
    int derivedData;
public:
    // �����๹�캯��
    Derived(int baseData, int derivedData) : Base(baseData), derivedData(derivedData) {
        std::cout << "Derived ���캯�������ã�derivedData = " << derivedData << std::endl;
    }

    // �����࿽�����캯��
    Derived(const Derived& other) : Base(other), derivedData(other.derivedData) {
        std::cout << "Derived �������캯�������ã�derivedData = " << derivedData << std::endl;
    }

    // �����ำֵ���������
    Derived& operator=(const Derived& other) {
        if (this != &other) {
            // ��ʽ���û���� operator=
            Base::operator=(other);
            derivedData = other.derivedData;
        }
        std::cout << "Derived operator= �����ã�derivedData = " << derivedData << std::endl;
        return *this;
    }

    // ��������������
    ~Derived() {
        std::cout << "Derived �������������ã�derivedData = " << derivedData << std::endl;
    }
};

int main() {
    // ����������ʼ�����ȵ��û��๹���ٵ��������๹��
    Derived d1(10, 20);

    // �����࿽�����캯�����û��࿽�����캯��
    Derived d2(d1);

    // ������ operator= ���û��� operator=
    Derived d3(30, 40);
    d3 = d1;

    return 0;
}