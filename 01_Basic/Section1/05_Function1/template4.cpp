// 클래스(구조체) 템플릿
// 함수뿐 아니라 "클래스(구조체)도 템플릿"으로 만들수 있다.
// "C++17" 부터는 생성자가 있으면 "템플릿 파라미터 전달을 생략"할 수도 있다.
template<typename T>
struct Point
{
    T x;
    T y;
};

int main()
{
    square(3);
    
    Point<int> pt;
    
    pt.x = 1;
    pt.y = 1;
    
    Point<double> pt2;
}
