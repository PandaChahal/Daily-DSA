#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "this is my new program";
    int count = 0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i] == ' ' )
        {
            count++;
        }
    }
    int num = count+1;
    cout<<"number of words are "<<num;
    return 0;
}