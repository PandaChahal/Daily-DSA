#include<iostream>
using namespace std;
int main()
{
    int n = 1234;
    int newNum = 0;
    while(n!=0)
    {
        int num = n%10;
        newNum = (newNum*10) + num ;
        n = n/10;
    }
    cout<<newNum;
    return 0;
}