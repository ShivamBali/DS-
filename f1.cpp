#include<iostream>
using namespace std;
class insert
{
  private:
  int a[100],n,pos,num;
  public:
  void ins()
  {
      cout<<"No. of elements:";
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
  }
  void insertion()
  {
      cout<<"Position to be inserted on:";
      cin>>pos;
      cout<<"element to be inserted";
      cin>>num;
      for(int i=n;i>=pos;i--)
      {
          a[i]=a[i-1];
      }
      a[pos]=num;
      for(int i=0;i<n+1;i++)
      {
          cout<<a[i]<<endl;
      }

  }
  void loc()
  {
      int x,i,id;
      cout<<"enter element to be searched:";
      cin>>x;
      for(i=0;i<n;i++)
      {
          if(a[i]==x)
            id=i;
      }
      cout<<"element found at index "<<id;
  }
  void del()
{
    int i;
    cout<<"Enter the position to be deleted";
    cin>>pos;
    for(int i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        cout<<a[i]<<endl;
    }

}
  void display()
  {
      int i;
      for(i=0;i<n;i++)
      {
          cout<<a[i]<<endl;
      }
  }
};
int main()
{
    insert obj;
    int ch=-1;
    while(ch!=6)
    {
        cout<<endl<<"1.Insert"<<endl<<"2.Insertion at a given position"<<endl<<"3.Display array"<<endl<<"4.Finding location of a given element"<<endl;
        cout<<"5.Delete"<<endl<<"Else Program terminates"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            obj.ins();
            break;
        case 2:
            obj.insertion();
            break;
        case 3:
            obj.display();
            break;
        case 4:
            obj.loc();
            break;
        case 5:
            obj.del();
            break;
        default:
            cout<<"Program Terminated";
            ch=6;
            break;
        }
    }
    return 0;
}
