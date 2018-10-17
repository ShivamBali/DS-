#include<iostream>
using namespace std;
void swap1(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int Partition(int arr[],int low,int high)
{
    int i,j,temp,temp1;
    int pivot=arr[high];
    i=(low-1);
    for(j=low;j<=high-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap1(&arr[i],&arr[j]);
        }
    }
    swap1(&arr[i+1],&arr[high]);
    return(i+1);
}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=Partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
void display(int arr[],int n)
{
    int i;
    cout<<"Array Sorted using QuickSort:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[100],i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    display(arr,n);
    return 0;
}
