int main()
{
    int x[5] = {1, 2, 3, 4, 5};

    auto n1 = x[0]; // auto, 우변의의 수식(expression)으로 좌변의 type을 결정한다. x[0]의 type을 가지고 n1의 type을 결정한다.
    //auto n2; // error

    decltype(n1) n3;
    decltype(n1) n4 = n1;
}
