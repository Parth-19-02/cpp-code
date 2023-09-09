#include <bits\stdc++.h>

using namespace std;

int main()
{
    int n,m,target;
    cin>>n>>m;
    cin>>target;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    bool found = false;
    int row=0,col=n-1;
    while(row<m&&col>=0)
    {
        if(arr[row][col] == target)
        {
            found = true;
        }
        arr[row][col]>target?col--:row++;
    }
if (found)
cout << "Found";
else
cout << "Not Found";
}