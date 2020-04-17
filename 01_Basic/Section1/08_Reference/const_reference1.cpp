// const reference 인자
// 1) call by value의 특징
//  => 인자로 전달된 객체의 "복사본이 생성"된다.
//  => 원본 객체를 변경할 수 없다. - "안전"하다.
//  => 하지만, "복사본에 대한 오버헤드"가 있다.
// 2) 인자의 값을 변경하지 못하는 함수를 만들려면
//  => "call by value 보다는 const reference를 사용"하는 것이 좋다.
// 3) const reference의 장점
//  => 인자에 대한 "복사본을 만들지 않는다." 
//  => "복사 생성자와 소멸자가 호출되지 않는다."

#include <iostream>

struct Date
{
    int year;
    int month;
    int day;
};

// void foo(Date d)     // call by value
void foo(const Date& d) // const reference
{
    // d.year = 1000; // error
}

int main()
{
    Date date = {2020, 3, 28};
    
    foo(date);
    
    std::cout << date.year << std::endl; // 2020
}
