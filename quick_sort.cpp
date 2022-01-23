//QUICK SORT
#include<iostream>
using namespace std;


void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

//pivot element can be first element,last element,mid element or any random element .Choice is ours in this case

//In this code,we are considering last element as a pivot element
//i is denoting last number which is less than pivot
int partition(int arr[],int l,int r)
{
    int pivot=arr[r];//last element is considered as pivot
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    //after ending of for loop
    swap(arr,i+1,r);//element at r is pivot
    return i+1;
}

void quicksort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pi=partition(arr,l,r);//this step will give us our pivot element
        quicksort(arr,l,pi-1);//left subhalf
        quicksort(arr,pi+1,r);//right subhalf
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
    quicksort(a,0,n-1);
    printelements(a,n);
    return 0;
}
/*Time complexity of quicksort depends on availability of pivot element
(1)In best case,pivot would be median element(Due to this problem would be divided into two subproblems from mid)(Best case will be nlogn)
(2)In worst case,pivot would be last element(Worst case will be n^2)
Space complexity will be o(n)
*/
