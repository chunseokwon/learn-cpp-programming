/*

반드시 멤버 초기화 리스트를 사용해야 하는 경우
2) 클래스 안에 "디폴트 생성자가 없는 타입이 멤버 데이터로" 있을 때

*/

class Point
{
    int x;
    int y;
public:
    Point( int a, int b) : x(a), y(b) {}
};

class Rect
{
    Point p1;
    Point p2;
public:
    Rect(int a, int b, int c, int d) : p1(a,b), p2(c,d) 
    {
        // p1(a, b); // error
    }
};

int main()
{
    Rect r; // p1 Point 생성자
            // p2 Point 생성자
            // Rect 생성자
}