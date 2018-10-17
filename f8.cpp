#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n)
{
    int i,j,mini;
    for(i=1;i<n;i++)
    {
        mini=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>mini)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=mini;
    }
}
void display(int arr[],int n)
{
    int i;
    cout<<"Array Sorted using Insertion Sort:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void insertnew(int arr[],int n,int x)
{
    arr[n]=x;
}
int main()
{
    int arr[100],i,n,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    InsertionSort(arr,n);
    display(arr,n);
    cout<<"Enter element to be inserted:";
    cin>>x;
    insertnew(arr,n,x);
    InsertionSort(arr,n+1);
    display(arr,n+1);
    return 0;
}
