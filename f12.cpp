#include<iostream>
using namespace std;
void swap1(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void heapify(int arr[],int i,int n)
{
    int large=0;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]>arr[i])
        large=l;
    else
        large=i;
    if(r<n && arr[r]>arr[large])
        large=r;
    if(large!=i)
    {
        swap1(&arr[i],&arr[large]);
        heapify(arr,large,n);
    }
}
void build_heap(int arr[],int n)
{
    int i;
    for(i=(n-1)/2;i>=0;i--)
    {
        heapify(arr,i,n);
    }
}
void heapsort(int arr[],int n)
{
    int i;
    int heapsize=n;
    build_heap(arr,n);
    for(i=n-1;i>=0;i--)
    {
        swap1(&arr[0],&arr[i]);
        heapsize=heapsize-1;
        heapify(arr,0,heapsize);
    }
}
void display(int arr[],int n)
{
    int i;
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
    heapsort(arr,n);
    display(arr,n);
    return 0;
}
