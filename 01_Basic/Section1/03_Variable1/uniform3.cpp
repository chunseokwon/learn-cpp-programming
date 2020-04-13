struct Point
{
    int x;
    int y;
};
void foo(int   n) {} // int n = 10
void goo(Point p) {}

int main()
{
    //int n = 10;
    int n = {10};
    
    foo(10);
    foo({10}); // 암수의 인자로 "중괄호를 사용한 초기값"을 전달할 수 있다.
    

    Point p = {1,2};
    goo( { 1,2} );
    

    int n1 = {0}; // copy initialization
    int n2{0};    // direct initialization, "explicit 생성자"를 가지는 타입은 "direct initialization"만 가능하다.
}
