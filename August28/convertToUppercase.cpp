#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "hello";
    int n = str.size();
    cout<<"initial string is : ";
    for(int i =0;i<n;i++)
    {
        cout<<str[i];
    }
    cout<<endl;
    cout<<"new string is : ";
    for(int i =0;i<n;i++)
    {
        str [i] -= 32;
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}