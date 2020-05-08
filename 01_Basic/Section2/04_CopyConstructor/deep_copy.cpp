/*

객체의 복사 방법
1) 깊은 복사(Deep Copy)
=> 클래스 안에 포인터 멤버가 있을 때 "메모리 주소를 복사하지 말고 메모리 자체의 복사본을 만드는 기술"

깊은 복사(Deep Copy)의 단점
=> 객체를 여러번 복사하면 동일한 자원(이름)이 메모리에 여러번 놓이게 된다.
=> 자원의 크기가 큰 경우 메모리 낭비가 발생

2) 참조 계수(reference counting)
=> 여러 객체가 하나의 자원을 공유하게 한다.
=> 단, 몇 명의 객체가 자원을 사용하는지 개수를 관리한다.

*/

#include <iostream>
#include <cstring>

class Person
{
    char* name;
    int   age;
public:
    Person(const char* n, int a) : age(a)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
    ~Person() { delete[] name;}

    Person(const Person& p) : age(p.age) // 초기화 리스트
    {
        // age = p.age;   // 초기화 리스트를 사용하는 것이 좋다.
        // name = p.name; // 주소가 복사된다.
    
        // 포인터는 복사하지 말고. 새롭게 메모리 할당
        name = new char[strlen(p.name) + 1];
        strcpy(name, p.name);
    }
};


int main()
{
    Person p1("kim", 20);
    Person p2 = p1; 

}
