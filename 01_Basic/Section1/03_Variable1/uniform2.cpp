struct Point
{
    int x;
    int y;
};

int main()
{
    // 변수의 타입/종류에 따라 "초기화 방법이 다르다."
    // "암시적 형변환에 따른 데이터 손실"이 발생할 수 있다.
    /*
    int n1 = 10;
    int n2(10); // C++
    
    int x[2] = {1,2};
    Point pt = {1,2};
    
    int n3 = 3.4; // 암시적 형변환
    char c = 300;
    */
    
    int n1 = {10};
    int n2{10}; // C++
    
    int x[2] = {1,2};
    Point pt = {1,2};
    
    int n3 = {3.4}; // error
    char c = {300}; // error
}
