//INSERTION SORT
#include<iostream>
using namespace std;

void swap(int* x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void insertionsort(int arr[],int n)
{
for(int i=1;i<n;i++)//starting from the second element
{
int current=arr[i];
int j=i-1;//considering 1 position before the current position
while(arr[j]>current  && j>=0)
{
    arr[j+1]=arr[j];//move it one position ahead
    j--;//this step is done as we have to traverse all elements before the current element
}
arr[j+1]=current;//this is done to ensure to put current element right after that element upto which j has gone
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
    insertionsort(a,n);
    printelements(a,n);
    return 0;
}
//TC=O(N^2)
//SC=O(1)