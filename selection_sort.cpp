//SELECTION SORT
#include<iostream>
using namespace std;

void swap(int* x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void selectionsort(int a[],int n)
{
for(int i=0;i<n-1;i++)
{
    int min_idx=i;//fixed position for a particular pass
    for(int j=i+1;j<n;j++)
    {
        if(a[j]<a[min_idx])
        min_idx=j;

        swap(&a[min_idx],&a[i]);
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
    selectionsort(a,n);
    printelements(a,n);
    return 0;
}
//TC=O(N^2)
//SC=O(1)