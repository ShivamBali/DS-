#include<iostream>
using namespace std;
class stack1
{
    int arr[8];
    int top;
public:
    stack1()
    {
        top=-1;
    }
    void push(int);
    void display();
    void pop();
    void peek();
    bool is_empty();

};
void stack1::push(int x)
{
    if(top==8)
    {
        cout<<"Overflow"<<endl;
    }
    arr[++top]=x;
}
void stack1::pop()
{
    if(top==-1)
    {
        cout<<"Underflow";
    }
    top--;
}
void stack1::display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    stack1 s1;
    int x,ch=-1,n,i;
    while(ch!=6)
    {
        cout<<endl<<"Press 1 for push"<<endl<<"Press 2 for display"<<endl<<"Press 3 for popping";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"How many times you want to push:";
            cin>>n;
            for(i=0;i<n;i++)
            {
                cout<<"Enter element to be pushed:";
                cin>>x;
                s1.push(x);
            }
            s1.display();
            break;
        case 2:
            s1.display();
            break;
        case 3:
            cout<<"How many times you want to pop:";
            cin>>n;
            for(i=n-1;i>=0;i--)
            {
                s1.pop();
            }
            s1.display();
            break;
        default:
            cout<<"Invalid choice, Program terminated";
            ch=6;
            break;

        }
    }
    return 0;
}

