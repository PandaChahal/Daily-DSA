#include<bits/stdc++.h>
using namespace std;
string encode(string str)
{
    int n = str.size();
    for(int i=0;i<n;i++)
    {
        str[i] += 5;
    }
    return str;
}
string decode(string str)
{
    int n = str.size();
    for(int i=0;i<n;i++)
    {
        str[i] -= 5;
    }
    return str;
}
int main()
{
    string str = "hashan";
    string encoded = encode(str);
    cout<<"encoded string is ";
    for(int i=0;i<encoded.size();i++)
    {
        cout<<encoded[i];
    }
    cout<<endl;
    string decoded = decode(encoded);
    cout<<"decoded string is ";
    for(int i=0;i<decoded.size();i++)
    {
        cout<<decoded[i];
    }
    return 0;
}