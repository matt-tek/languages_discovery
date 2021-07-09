#include <iostream>

int calcul(int a, int b)
{
    a += b;
    return (a);
}

int main(void)
{
    int a = 1;
    int b = 1;

    return (calcul(a, b));
}