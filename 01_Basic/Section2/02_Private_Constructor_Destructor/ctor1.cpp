/*

생성자(constructor)
생성자 기본 개념
1) 생성자를 사용하는 이유
=> "객체를 자동으로 초기화"하기 위해서

2) 생성자 모양
=> "클래스 이름과 동일한 함수"
=> 리턴 타입을 표기하지 않는다.
=> 인자는 있어도 되고 없어도 된다 - 2개 이상 만들 수 있다.

3) 객체를 생성하면
=> 객체의 크기 만큼 메모리를 할당하고
=> "생성자가 호출" 된다.
=> 생성자가 없으면 객체를 만들 수 없다.

4) 디폴트 생성자
=> 사용자가 생성자를 한 개도 만들지 않으면 "컴파일러가 인자 없는 생성자를 제공" 해 준다.

*/

#include <iostream>
using namespace std;

class Point
{
    int x, y;
public:
    //Point()             { x = 0; y = 0; cout << "1" << endl;}
    //Point(int a, int b) { x = a; y = b; cout << "2" << endl;}
};

int main()
{
    Point p1;         // 1
    //Point p2(1, 2); // 2 error
}