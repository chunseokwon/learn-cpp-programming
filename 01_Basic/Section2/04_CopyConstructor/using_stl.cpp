/*

1) 복사 금지
=> 객체를 복사하지 못하게 하자는 의도
=> 복사 생성자를 delete 한다.

2) 문자열이 필요하면 STL의 string 클래스를 사용하자
=> 동적 메모리 할당을 할 필요 없다.
=> string이 내부적으로 자원을 관리해준다.
=> int 변수 처럼 사용하면 된다.


*/

#include <iostream>
#include <cstring>
#include <string>

class Person
{
    std::string name;
    int   age;
public:
    Person(std::string n, int a) : name(n), age(a)
    {
    }
};

int main()
{
    Person p1("kim", 20);
    Person p2 = p1;

}
