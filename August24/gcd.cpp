#include<iostream>
using namespace std;
int main()
{
    int n1 = 9,n2 = 12;
    int n = min(n1,n2);
    int gcd = 0;
    for(int i = 1;i<n;i++)
    {
        if((n1%i) == 0 && (n2%i) ==0)
        gcd = max(gcd,i);
    }
    cout<<gcd;
    return 0;
}