#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "abccdccba";
    string initial = str;
    int n = str.size();
    int i = 0;
    int j = n-1;
    cout<<"initial string is : ";
    for(int i =0;i<n;i++)
    {
        cout<<str[i];
    }
    cout<<endl;
    while(i<j)
    {
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout<<"reversed string is : ";
    for(int i =0;i<n;i++)
    {
        cout<<str[i];
    }
    cout<<endl;
    cout<<"thus the given string is ";
    if(initial == str)
    {
        cout<<" a palindrome";
    }
    else
    {
        cout<<"not a palindrome ";
    }
    return 0;
}