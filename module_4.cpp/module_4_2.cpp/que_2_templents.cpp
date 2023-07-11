// 	Write a program of to sort the array using templates.
#include <algorithm>
#include <iostream>

using namespace std;

void show(int a[], int array_size)
{
    for (int i = 0; i < array_size; ++i)
        cout << a[i];
}

int main()
{
    int a[10];
    for (int i = 0; i <= 4; i++)
    {
        cin >> a[i];
    }

    int asize = sizeof(a) / sizeof(a[0]);
    cout << "The array before sorting is : \n";

    show(a, asize);

    sort(a, a + asize);

    cout << "\n\nThe array after sorting is :\n";

    show(a, asize);

    return 0;
}