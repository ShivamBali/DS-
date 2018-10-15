#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct linked_list
{
    node *head,*tail;
    linked_list()
    {
        head=NULL;
        tail=NULL;
    }
    void insert_beg();
    void insert_end();
    void del_beg();
    void del_end();
    node *createnode(int x);
    void display();
};
node* linked_list::createnode(int x)
{
    node *temp=new node;
    temp->data=x;
    temp->next=temp;
    return temp;

}
void linked_list::display()
{
    node *ptr;
    if(head==NULL)
    {
        cout<<"LL is empty";
    }
    else
    {
        ptr=head;
        while(ptr->next!=head)
        {
            cout<<ptr->data<<"->";
            ptr=ptr->next;
        }
        cout<<ptr->data;
    }
}
void linked_list::insert_beg()
{
    int ele;
    node *p,*ptr;
    cout<<"Enter element to be inserted";
    cin>>ele;
    p=createnode(ele);
    if(head==NULL)
    {
        head=p;
        tail=p;
    }
    else
    {
        p->next=head;
        tail->next=p;
        head=p;
    }

}
void linked_list::insert_end()
{
    int ele;
    node *p,*ptr;
    cout<<"Enter element to be inserted";
    cin>>ele;
    p=createnode(ele);
    if(head==NULL)
    {
        head=p;
        tail=p;
    }
    else
    {
        ptr=head;
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        ptr->next=p;
        p->next=head;
    }
}
void linked_list::del_beg()
{

}
void linked_list::del_end()
{

}
int main()
{
    linked_list l1;
    int s;
    s=1;
    while(s==1)
    {
        cout<<endl<<"Press 1 for inserting a node"<<endl<<"Press 2 for displaying the linked list"<<endl<<"Press 3 for inserting a node in end"<<endl;
        cout<<"Press 4 for deleting node from beginning"<<endl<<"Press 5 for deleting a node in ending";
        cin>>s;
        switch(s)
        {
        case 1:
            l1.insert_beg();
            l1.display();
            break;
        case 2:
            l1.display();
            break;
        case 3:
            l1.insert_end();
            l1.display();
            break;
        case 4:
            l1.del_beg();
            l1.display();
            break;
        case 5:
            l1.del_end();
            l1.display();
            break;
        default:
            cout<<"Invalid choice";
            break;
        }
     }
}

