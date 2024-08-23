#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1,2,0,4,5,0};
    int n = arr.size();
    int product = 1;
    int maxProduct = 0;
    for(int i =0;i<n;i++)
    {
        product *= arr[i];
        maxProduct = max(maxProduct,product);
        if(arr[i] == 0)
        {
            product = 1;
        }
    }
    
    cout<<maxProduct;
    return 0;
}