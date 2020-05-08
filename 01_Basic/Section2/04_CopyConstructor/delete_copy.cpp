/*

1) 복사 금지
=> 객체를 복사하지 못하게 하자는 의도
=> 복사 생성자를 delete 한다.

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
    
    Person(const Person&) = delete;
};

int main()
{
    Person p1("kim", 20);

    Person p2 = p1; // 컴파일 에러가 나오게 하자.
}
