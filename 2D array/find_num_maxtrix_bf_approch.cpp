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

    int x,y;
    bool found=false;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==target)
            {
                found=true;
                cout<<i<< " "<<j<<endl;
                x=i;
                y=j;

            }
        }
        if(found==true)
        break;
        
    }

    if(found==true)
    cout<<"The target number is in the metrix["<<x<<"]"<<"["<<y<<"]"<<endl;
    else
    cout<<"The target number is not in the metrix"<<endl;

    return 0;
}

