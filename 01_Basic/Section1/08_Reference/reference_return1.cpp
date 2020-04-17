// reference와 함수 반환값
// 1) 함수 인자
// ------------------------------------------
// call by value : 복사본을 생성한다.
// call by reference : 복사본을 생성하지 않는다.
// ------------------------------------------
// 
// 2) 함수 반환값
// ------------------------------------------
// return by value : 복사본을 생성한다.
// return by reference : 복사본을 생성하지 않는다.
// ------------------------------------------

struct Point
{
    int x;
    int y;
    
    //Point() {}
};

void f1(Point  pt) {} // 복사본 생성
void f2(Point& pt) {} // 복사본 생성 안함.

Point pt = {0,0};

// Point foo()  // 값 타입반환 return by value
                // 리턴용 임시 객체를 생성하여 반환한다.
Point& foo()
{
     return pt; 
}    

int main()
{
    foo().x = 10;
    // pt.x => 10
}
