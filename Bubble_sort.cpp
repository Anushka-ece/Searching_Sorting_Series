//BUBBLE SORT

#include<iostream>
using namespace std;

void bubblesort(int a[],int n)
{
for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(a[j]<a[i])
        {
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
}
}

void printelements(int a[],int n)
{
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"elements in sorted order is :"<<endl;
    bubblesort(a,n);
    printelements(a,n);
    return 0;
}
//TC=O(N^2)
//SC=O(1)