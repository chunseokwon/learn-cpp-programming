/*

explict 생성자
1) 객체를 초기화 할 때 직접 초기화만 사용할 수 있고, 복사 초기화는 사용할 수 없다.

*/

class Point
{
    int x;
    int y;
public:
    explicit Point( int a = 0, int b = 0 ) : x(a), y(b) {  }
};

void foo( Point p) {}

int main()
{
    Point p1(1,2);
    Point p2{1,2};
    Point p3 = {1,2}; // error
    Point p4 = 1;     // error
    
    p1 = {1,2}; // error
    p1 = 10;    // error
    
    foo(p1);    // ok 
    foo({1,1}); // error
    foo(1);     // error
}
