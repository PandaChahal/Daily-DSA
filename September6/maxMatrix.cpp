#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr = {{1,0,1},{1,1,1},{0,0,0}};
    int maxCount = 0;
    int index;
    for(int i =0;i<arr.size();i++)
    {
        int count = 0;
        for(int j =0;j<arr[0].size();j++)
        {
            if(arr[i][j] == 1)
            {
                count++;
            }
            if(count > maxCount)
            {
                maxCount = max(count,maxCount);
                index = i;
            }
        }
    }
    cout<<index+1;
    return 0;
}