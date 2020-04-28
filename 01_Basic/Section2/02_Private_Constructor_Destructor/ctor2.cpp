/*

객체를 생성하는 다양한 방법
1) "() 또는 {}를 사용해서 생성자 인자를 전달"한다.

2) "직접 초기화(direct initalization)와" "복사 초기화(copy initalization)"

3) 배열 생성
=> "배열의 개수 만큼 생성자가 호출" 된다.

4) malloc vs new
------------------------------------------------------------
malloc : 메모리만 할당 "생성자를 호출하지 못한다."
new    : 메모리를 할당하고 "생성자 호출"
------------------------------------------------------------

*/

#include <iostream>
using namespace std;

class Point
{
    int x, y;
public:
    Point()             { x = 0; y = 0; cout << "1" << endl;} // 1번 생성자
    Point(int a, int b) { x = a; y = b; cout << "2" << endl;} // 2번 생성자
};

int main()
{
    /*
    Point p1(1,2);     // 2번 생성자 호출
    Point p2{1,2};     // 2번 생성자 호출,  C++11 
    Point p3 = {1,2};  // 2번 생성자 호출,  C++11 
    */

    /*
    Point p4;       // 1번 생성자 호출
    Point p5();     // 객체 생성 아님. 함수 선언문
    Point p6{};     // 1번 생성자 호출
    Point p7 = {};  // 1번 생성자 호출
    */

    /*
    Point p8[3];    // 1번 생성자 3번 호출

    Point p9[3] = {Point(1,1)}; // 2번 생성자 1회 호출
                                // 1번 생성자 2회 호출
    
    Point p10[3] = { {1,1}, {2,2} }; // 2번 생성자 2회 호출
                                     // 1번 생성자 1회 호출
                                     // C++11
    */

    Point* p11; // 생성자 아님
    
    p11 = static_cast<Point*>( malloc(sizeof(Point))); // malloc: 메모리만 할당 "생성자를 호출하지 못한다."
    free(p11);
    
    p11 = new Point;      // 1번 생성자 호출, new: 메모리를 할당하고 "생성자 호출"
    delete p11;
    
    p11 = new Point();    // 1번 생성자 호출
    delete p11;
    
    p11 = new Point(1,2); // 2번 생성자 호출
    delete p11;

}
