#include<iostream>
using namespace std;
class sortsearch
{
    int arr[100],i,n,num,temp;
public:
    void ins()
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    void bubble()
    {
        int j;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp   = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    int binary()
    {
        int key,low,high,flag=0,m;
        low=0;
        high=n-1;
        cout<<"Enter element to be searched:";
        cin>>key;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]<key)
            {
                low=mid+1;
            }
            else if(arr[mid>key])
            {
                high=mid+1;
            }
            else
            {
                return mid;
                low=high;
                break;
            }
        }
        return key;
    }
    void display()
    {
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};
int main()
{
    sortsearch s1;
    s1.ins();
    cout<<"Before sorting:-"<<endl;
    s1.display();
    s1.bubble();
    cout<<"After sorting:-"<<endl;
    s1.display();
    int m=s1.binary();
    cout<<m;
    return 0;
}
