// •	Write a program of to swap the two values using templates

#include <iostream>
using namespace std;

template <class>
int swap_numbers(T &x, T &y)
{
    T t;
    t = x;
    x = y;
    y = t;
    return 0;
}

int main()
{
    int a, b;
    a = 50, b = 90;

    swap_numbers(a, b);
    cout << a << " " << b << endl;
};