// Template 생성
template<typename T> 
T square(T a)
{
    return a * a;
}


int main()
{
    square<int>(3);      // int square(int a) 함수 생성
    square<double>(3.3); // double square(double) 함수 생성
}
