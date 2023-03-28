#include<bits/stdc++.h>
using namespace std;
void rotate_left(int a[], int n)
{
    cout<<"enter how many time you want to rotate\n";
    int times;
    cin>>times;
    while(times--){
    int temp=a[0];
    for(int i=1; i<n;i++)
    {
        a[i-1]=a[i];
    }
    a[n-1]=temp;
    }
    for(int i=0; i<n; i++)
    cout<<a[i]<< " ";
}
void rotate_right(int a[],int n)
{
    int times;
    cin>>times;
    while(times--){
    int temp=a[n-1];
    for(int i=n-1; i>=0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    }
    for(int i=0; i<n; i++)
    cout<<a[i]<< " ";
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter one for rotate to left or two for right\n";
    int t;
    cin>>t;
    if(t==1)
    {
        rotate_left(a, n);
    }
    else if(t==2)
    {
        rotate_right(a, n);
    }
    else return 0;
    return 0;
}