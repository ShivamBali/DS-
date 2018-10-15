#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct double_linked_list{
    node *head, *tail;
    double_linked_list()
    {
        head=NULL;
        tail=NULL;
    }
    node *create_node(int);
    void insert_beg();
    void insert_end();
    void insert_after();
    void insert_before();
    void display();
    void del_given();
    void search_ele();
};
node *double_linked_list::create_node(int x)
{
    node *temp=new node;
    temp->prev=NULL;
    temp->data=x;
    temp->next=NULL;
    return temp;
}

void double_linked_list::display()
{
    if(head==NULL)
    {
        cout<<"LL Is Empty";
    }
    node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"<->";
        ptr=ptr->next;
    }
}
void double_linked_list::insert_beg()
{
    node *p;
    int ele;
    cin>>ele;
    p=create_node(ele);
    if(head==NULL)
    {
        head=p;
        tail=p;
    }
    else
    {
        p->next=head;
        head->prev=p;
        head=p;
    }
}
void double_linked_list::insert_end()
{
    node *p;
    int ele;
    cin>>ele;
    p=create_node(ele);
    if(head==NULL)
    {
        head=p;
        tail=p;
    }
    else
    {
        tail->next=p;
        p->prev=tail;
        tail=p;
    }
}
void double_linked_list::insert_after()
{
    node *p;
    int ele,x;
    cout<<"enter element after which you want to insert"<<endl;
    cin>>x;
    cout<<"enter element you want to insert"<<endl;
    cin>>ele;
    p=create_node(ele);
    if(head==NULL)
    {
        head=p;
        tail=p;
    }
    else
    {
        node *ptr=head;
        while(ptr->data!=x)
        {
            ptr=ptr->next;
        }
        node *ptr2=ptr->next;
        ptr->next=p;
        p->next=ptr2;
        p->prev=ptr;
        ptr2->prev=p;
    }
}
void double_linked_list::insert_before()
{
    node *p;
    int ele,x;
    cout<<"enter element before which you want to insert"<<endl;
    cin>>x;
    cout<<"enter element you want to insert"<<endl;
    cin>>ele;
    p=create_node(ele);
    if(head==NULL)
    {
        head=p;
        tail=p;
    }
    else
    {
        node *ptr=head;
        while(ptr->data!=x)
        {
            ptr=ptr->next;
        }
        node *ptr2=ptr->prev;
        ptr2->next=p;
        p->next=ptr;
        p->prev=ptr2;
        ptr->prev=p;
    }
}
void double_linked_list::del_given()
{
    int x;
    cout<<"Enter Element you want to delete";
    cin>>x;
    node *ptr;
    ptr=head;
    while(ptr->data!=x)
    {
        ptr=ptr->next;
    }
    ptr->prev->next=ptr->next;
    ptr->next->prev=ptr->prev;
    delete ptr;
}
void double_linked_list::search_ele()
{
    int x,flag=0;
    cout<<"Enter Element you want to search:";
    cin>>x;
    node *ptr;
    ptr=head;
    while(ptr->next!=NULL)
    {
        if(ptr->data==x)
        {
            flag=1;
        }
        ptr=ptr->next;
    }
    if(flag==1)
    {
        cout<<x<<" found"<<endl;
    }
    else
    {
        cout<<x<<" not found"<<endl;
    }
}
int main()
{
    double_linked_list l1;
    int a;
    cout<<"1:inserton at beginning\n2:insertion at end\n3:Display\n4:insert after\n5:insert before"<<endl;
    cout<<"6:deletion of given node\n7:Search an element"<<endl;
    cin>>a;
    while(a!=0)
    {
        switch(a)
        {
            case 1:
                l1.insert_beg();
                break;
            case 2:
                l1.insert_end();
                break;
            case 3:
                l1.display();
                break;
            case 4:
                l1.insert_after();
                break;
            case 5:
                l1.insert_before();
                break;
            case 6:
                l1.del_given();
                break;
            case 7:
                l1.search_ele();
                break;
            default:
                cout<<"invalid input";
        }
        cin>>a;
    }
}
