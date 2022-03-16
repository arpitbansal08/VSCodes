// OERATORS IN POINTERS
#include<iostream>

using namespace std;

int main()

{
    int i=10;
    int *ptr=&i;
    cout<<i<<endl;
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    return 0;
}