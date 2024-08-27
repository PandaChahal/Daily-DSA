#include<iostream>
using namespace std;
int main()
{
    int n = 10;
    bool flag = true;
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            flag = false;
        }
    }
    if(flag)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not a prime";
    }
    return 0;
}