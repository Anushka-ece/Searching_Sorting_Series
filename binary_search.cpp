//BINARY SEARCH
#include<iostream>
using namespace std;

bool binarysearch(int a[],int start,int end,int x)
{
   if(end>=start)
   {
       int mid=(end-start)/2+1;
       if(a[mid]==x)
       return true;
       else if(x<a[mid])
       binarysearch(a,start,mid-1,x);
       else if(x>a[mid])
       binarysearch(a,mid+1,end-1,x);
   }
   return false;
}

int main()
{int n,x;
cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(binarysearch(a,0,n-1,x))
    cout<<x<<" is present in array";
    else
    cout<<x<<" is not present in array";
    return 0;
}
//TC=o(logn)