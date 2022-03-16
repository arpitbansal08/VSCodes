#include<iostream>

using namespace std;

int main()

{
    int arr[10];
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    arr[0]=5;
    arr[1]=10;

    cout<<arr[0]<<endl;
    cout<<*arr<<endl;

    cout<<arr[1]<<endl;
    cout<<*(arr+1)<<endl;

    int *p=&arr[0];
    cout<<endl;

    cout<<p<<endl;
    cout<<*p<<endl;

    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr<<endl;
    cout<<arr[0]<<endl;

    cout<<*arr<<endl;
    cout<<arr<<endl;

    cout<<&p<<endl;

    cout<<sizeof(p)<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr[0])<<endl;


    return 0;
}
