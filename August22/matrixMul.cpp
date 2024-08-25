#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 2, b = 2, c = 2, d = 2;
    int mat1[a][b] = {{1, 1}, {2, 2}};

    int mat2[c][d] = {{1, 1}, {2, 2}};

    while (b == c)
    {
        int arr[a][d];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                arr[i][j] = 0;
                for (int k = 0; k < d; k++)
                {
                    arr[i][j] += mat1[i][k] * mat2[k][j];
                }

                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        break;
    }

    return 0;
}
