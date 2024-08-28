#include<bits/stdc++.h>
using namespace std;
string check(string str)
{
    for(int i =0;i<str.size();i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            return "no";
        }
    }
    return "yes";
}
int main()
{
    string str = "HASHAN CHAHAL";
    cout<<check(str);
    return 0;
}