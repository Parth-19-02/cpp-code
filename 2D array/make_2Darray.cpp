#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m; //matrix value n = row m = column
    cin>>n>>m;
    int arr[n][m];
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   int x;
   bool y = false;
   cout<<"Enter the number find in array\n";
   cin>>x;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          if(arr[i][j]==x)
         {
            y=true;
            cout<<"Element is found \n";
            break;
          }

        }
        
    }
    if (y == false){
        cout<<"Element is not found\n";
    }
    return 0;
}

