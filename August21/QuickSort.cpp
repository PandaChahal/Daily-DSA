#include<bits/stdc++.h>
using namespace std;
int divide(vector<int> arr,int lb,int ub)
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
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    int temp2 = arr[lb];
    arr[lb] = arr[ub];
    arr[ub] = temp2;
    return end;
}

int quickSort(vector<int> arr,int lb,int ub)
{
    if(lb<ub)
    {
        int loc = divide(arr,lb,ub);
        quickSort(arr,lb,loc-1);
        quickSort(arr,loc+1,ub);
    }
    for(int i =0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> arr = {5,4,10,1,6,2};
    int n = arr.size();
    quickSort(arr,arr[0],arr[n-1]);
    return 0;
}