// DOUBLE POINTER
#include <iostream>

using namespace std;
void increment1(int **ptr)
{
    ptr = ptr + 1;
}
void increment2(int **ptr)
{
    *ptr = *ptr + 1;
}
void increment3(int **ptr)
{
    **ptr = **ptr + 1;
}
int main()

{
    int i = 10;
    int *ptr1 = &i;
    cout << &i << endl;
    cout << ptr1 << endl;
    cout << *ptr1 << endl;
    cout << &ptr1 << endl;
    cout << endl;
    int **ptr2 = &ptr1;
    cout << ptr2 << endl;
    cout << *ptr2 << endl;
    cout << **ptr2 << endl;

    increment1(ptr2);
    // increment2(ptr2);
    increment3(ptr2);
    cout << endl;
    cout << i << endl;
    cout << ptr1 << endl;
    cout << ptr2 << endl;
    return 0;
}
