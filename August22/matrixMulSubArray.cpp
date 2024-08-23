#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1,2,3,4,5,0};
    int n = arr.size();
    int product = 1;
    int maxProduct = 0;
    for(int i =0;i<n;i++)
    {
        product *= arr[i];
        maxProduct = max(maxProduct,product);
    }
    cout<<maxProduct;
    return 0;
}