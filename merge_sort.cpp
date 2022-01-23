//MERGE SORT
#include<iostream>
using namespace std;


void merge(int arr[],int low,int mid,int high)
{
//This function is used to merge two already sorted arrays
//Here we have to make two temporary arrays
int n1=mid-low+1;
int n2=high-(mid+1)+1;
//two temporary arrays for storing values from low to mid-1 and from mid+1 to high respectively
int a[n1];
int b[n2];
for(int i=0;i<n1;i++)
{
    a[i]=arr[low+i];
}
for(int i=0;i<n2;i++)
{
    b[i]=arr[mid+1+i];
}
//let's make three pointers for array a ,b and resultant array respectively
int i=0;
int j=0;
int k=low;
while(i<n1 && j<n2)
{
    if(a[i]<b[j])//smaller element is put firstly into the resultant array
    {
        arr[k]=a[i];
        k++;
        i++;
    }
    else
    {
        arr[k]=b[j];
        k++;
        j++;
    }
}
  //NOW ANOTHER COMDITION THAT WE NEED TO CONSIDER IS THAT THIS SHOUDN'T HAPPEN THAT WE HAVE REACHED UPTO END INDEX IN SOME ARRAY SAY a
// AND HAVEN'T COMPLETED INDICES OF ANOTHER ARRAY i.e. b so this should be handled as follows when we will come out of the above while loop
while(i<n1)
{
    arr[k]=a[i];
    k++;
    i++;
}
while(j<n2)
{
    arr[k]=b[j];
    k++;
    j++;
}
}

void mergesort(int arr[],int low,int high)
{
if(low<high)
{
    int mid=(low+high)/2;
    mergesort(arr,low,mid-1);//left subdivision
    mergesort(arr,mid+1,high);//rightsubdivision

    merge(arr,low,mid,high);//merge function to add up two individually sorted arrays
}
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
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
    mergesort(a,0,n-1);
    printarray(a,n);
return 0;
}
/*T.C = 
While solving ,we have firstly divided array into two subarrays of size n/2 each and then traverse entire array at once in n time
Ans we have to perform half-half divisions n times.Therefore overall complexity will be n*logn i.e. nlogn

S.C =O(N)
*/