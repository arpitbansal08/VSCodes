// Pointers
#include <iostream>

using namespace std;

int main()

{
    int i = 10;
    cout << i << endl;
    cout << &i << endl;
    int *ptr = &i;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << sizeof(ptr) << endl;

    i++;
    cout << i << endl;
    cout << *ptr << endl;

    int a = *ptr;
    a++;
    cout << a << endl;
    cout << *ptr << endl;

    i = 12;
    cout << i << endl;
    cout << *ptr << endl;
    *ptr = 23;
    cout << i << endl;
    cout << *ptr << endl;

    (*ptr)++;
    cout<<i<<endl;
    cout<<*ptr<<endl;

    float d = 10.2;
    float *pf = &d;
    double e = 10.233;
    double *pd = &e;

    int j;
    cout<<j<<endl;
    j++;
    cout<<j<<endl;
    int *prt;
    cout<<prt<<endl;
    cout<<*prt<<endl;
    return 0;
}
