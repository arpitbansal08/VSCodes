// FUNCTIONS AND POINTER
#include <iostream>

using namespace std;
void print(int *p)
{
    cout << *p << endl;
}
void incrementPointer(int *p)
{
    p = p + 1;
}
void increment(int *p)
{
    (*p)++;
}

int sum(int *arr, int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans+arr[i];
    }
    // cout << sizeof(arr) << endl;
    return ans;
}
int main()

{
    int i = 10;
    int *ptr = &i;
    print(ptr);
    cout << ptr << endl;
    incrementPointer(ptr);
    cout << ptr << endl;
    increment(ptr);
    cout << ptr << endl;
    cout << *ptr << endl;

    int a[10]={1,1,1,1,1,1,1,1,1,1};
    cout << sizeof(a) << endl;
   // sum(a, 10);
    cout<<sum(a+3,7)<<endl;
    return 0;
}