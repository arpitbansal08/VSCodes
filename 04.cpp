// CHARACTERS ARRAY AND POINTER 
#include <iostream>

using namespace std;

int main()

{
    int a[] = {1, 2, 3};
    // char str[3]={'a','b','c'};
    char b[] = "abcd";
    cout << a << endl; // GIVES ADDRESS
                       // cout<<str[2]<<endl;
    cout << b << endl; // GIVES ABCD AS OUTPUT

    char *c = &b[0];
    cout << c << endl;
    cout << *c << endl;

    char *e = b;
    cout << e << endl;
    cout << *e << endl;
    e++;
    cout << e << endl;
    cout << *e << endl;

    char d = 'a';
    char *pd = &d;

    cout << d << endl;
    cout << pd << endl;
    pd++;
    cout << pd << endl;

    return 0;
}