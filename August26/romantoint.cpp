#include <bits/stdc++.h>
using namespace std;
int value(char ch)
{
    if(ch == 'i')
    {
        return 1;
    }
    if(ch == 'v')
    {
        return 5;
    }
    if(ch == 'x')
    {
        return 10;
    }
    if(ch == 'l')
    {
        return 50;
    }
    if(ch == 'c')
    {
        return 100;
    }
    if(ch == 'd')
    {
        return 500;
    }
    if(ch == 'm')
    {
        return 1000;
    }
    return -1;
}
int convertor(string& str)
{
    int result = 0; 
    for (int i = 0; i < str.size(); i++) 
    {
        int s1 = value(str[i]);
        if (i + 1 < str.size()) 
        {
            int s2 = value(str[i + 1]);
            if (s1 >= s2) 
            {
                result += s1;
            }
            else 
            {
                result += (s2 - s1);
                i++;
            }
        }
        else 
        {
            result += s1;
        }
    }
    return result;
}
int main()
{
    string str = "cd";
    cout << convertor(str) << endl;
    return 0;
}