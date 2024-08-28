#include<bits/stdc++.h>
using namespace std;
char smallest(string str)
{
    int n = str.size();
    char min = 'z';
    for(int i =0;i<n;i++)
    {
        if(str[i]<min)
        min = str[i];
    }
    return min;
}
char largest(string str)
{
    int n = str.size();
    char max = 'A';
    for(int i =0;i<n;i++)
    {
        if(str[i]>max)
        max = str[i];
    }
    return max;
}
int main()
{
    string str = "uekxnhtmso";
    char min_char , max_char;
    cout<<"smallest character = "<<smallest(str)<<endl;
    cout<<"largest character = "<<largest(str);
    return 0;
}