// Default Parameter
// 함수를 호출 시 인자를 전달하지 않으면 "미리 지정된 인자 값"을 사용할 수 있다.
// 
// 주의 사항 2가지
// 함수의 "마지막 인자부터 차례대로 디폴트 값을 지정"해야 한다.
// 함수를 선언과 구현으로 분리할 때는 "함수 선언부에만 디폴트 값을 표기"해야 한다.
void setAlarm(int h, int m = 0, int s = 0)
{
    // ......
}

int main()
{
    setAlarm( 3, 4, 5);
    
    setAlarm( 3, 0, 0);
    
    setAlarm( 3);      // 3, 0, 0
    
    setAlarm( 3, 30);  // 3, 30, 0
}

