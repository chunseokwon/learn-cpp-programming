/*

디폴트 복사 생성자의 문제점
1) 얕은 복사(Shallow Copy)
=> 클래스 안에 포인터 멤버가 있을 때 디폴트 복사 생성자가 "메모리 자체를 복사하지 않고 주소만 복사하는 현상"
=> 개발자가 직접 복사 생성자를 만들어야 한다.
=> 어떻게 복사할 것인가> 다양한 방법이 있다.

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
};

int main()
{
    Person p1("kim", 20);
    Person p2 = p1; // 실행 시 오류 발생
}
