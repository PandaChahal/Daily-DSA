#include<bits/stdc++.h>
using namespace std;
int divide(vector<int> &arr,int lb,int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while(start < end)
    {
        while(arr[start] <= pivot)
        {
            start++;
        }
        while(arr[end] > pivot)
        {
            end--;
        }
        if(start < end)
        {
            swap(arr[start],arr[end]);
        }
    }
    swap(arr[lb],arr[end]);
    return end;
}

int quickSort(vector<int> &arr,int lb,int ub)
{
    if(lb<ub)
    {
        int loc = divide(arr,lb,ub);
        quickSort(arr,lb,loc-1);
        quickSort(arr,loc+1,ub);
    }
}
int main()
{
    vector<int> arr = {5,4,10,1,6,2};
    int n = arr.size();
    quickSort(arr,0,n-1);
    for(int i =0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}