//LINEAR SEARCH
#include<iostream>
using namespace std;

bool linearsearch(int a[],int n,int x)
{
    int c=0;
for(int i=0;i<n;i++)
{
    if(a[i]==x)
    {
        c++;
        break;
    }
}
if(c>0)
return true;
else
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
    if(linearsearch(a,n,x))
    cout<<x<<" is present in array";
    else
    cout<<x<<" is not present in array";
    return 0;
}
//time complexity=o(n)