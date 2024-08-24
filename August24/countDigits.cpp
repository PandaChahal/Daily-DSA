#include<iostream>
using namespace std;
int main()
{
    int n = 55342;
    int count = 0;
    while(n != 0)
    {
        n = n/10;
        count++;
    }
    cout<<"number of digits in a number are "<<count;
    return 0;
}