#include<bits/stdc++.h>
// Time complexity O(nm(n+m))
// space complexity O(1)

void setZeroes(vector<vector<int>> &a)
{
    int rows = a.size();
    int cols = a[0].size();
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (a[i][j] == 0)
            {
                // make row elements 0
                for (int k = 0; k < cols; k++)
                    if (a[i][k] != 0)
                        a[i][k] = -1000;
                // make col elements 0
                for (int l = 0; l < rows; l++)
                    if (a[l][j] != 0)
                        a[l][j] = -1000;
            }
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (a[i][j] == -1000)
                a[i][j] = 0;
        }
    }
}
