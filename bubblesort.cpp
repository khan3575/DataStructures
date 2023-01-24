#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int item=0, pos=0;
    for(i=0; i<n-1; i++)
    {
        item= a[i];
        pos=i;
        for(j=i+1; j<n; j++)
        {

            if(item>=a[j])
            {
                item=a[j];
                pos = j;
            }
        }
        swap(a[i], a[pos]);
    }
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
