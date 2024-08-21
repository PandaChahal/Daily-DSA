#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {7,4,10,8,3,1};
    int n = arr.size();
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j = i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        if(min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp; 
        }
    }
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}