#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "hello";
    int n = str.size();
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        swap(str[i],str[j]);
        i++;
        j--;
    }
    for(int i =0;i<n;i++)
    {
        cout<<str[i];
    }
    return 0;
}