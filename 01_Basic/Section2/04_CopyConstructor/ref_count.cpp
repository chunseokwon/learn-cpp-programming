/*

객체의 복사 방법
2) 참조 계수(reference counting)
=> 여러 객체가 하나의 자원을 공유하게 한다.
=> 단, 몇 명의 객체가 자원을 사용하는지 개수를 관리한다.

참조 계수에서 좀 더 생각해야 할 점
=> p1 객체가 자신의 이름을 변경하면 어떻게 될까?
=> p2의 이름은 변경되면 안되므로 공유 했던 자원은 분리되어야 한다.
=> 멀티 스레드 환경에서는 동기화의 오버헤드가 추가된다.

*/

#include <iostream>
#include <cstring>

class Person
{
    char* name;
    int   age;
    int*  ref;
public:
    Person(const char* n, int a) : age(a)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        
        ref = new int(1);
        // *ref = 1;
    }

    ~Person() 
    {
        // 참조 계수 기반인 경우의 소멸자.
        if ( --(*ref) == 0 )
        {
            delete[] name;
            delete ref;
        }
    }

    Person(const Person& p) : name(p.name), age(p.age), ref(p.ref)
    {
        ++(*ref);
    }
};


int main()
{
    Person p1("kim", 20);
    Person p2 = p1; 

}
