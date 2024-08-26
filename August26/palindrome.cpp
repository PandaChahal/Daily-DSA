#include<iostream>
using namespace std;
int palindromeCheck(int n)
{
    int newNum = 0;
    while(n!=0)
    {
        int num = n%10;
        newNum = (newNum*10) + num ;
        n = n/10;
    }
    return newNum;
}
int main()
{
    int n = 12121;
    int num = palindromeCheck(n);
    if(num == n)
    {
        cout<<"palindrome found";
    }
    else
    {
        cout<<"not a palindrome";
    }
    return 0;
}