#include<iostream>
using namespace std;
struct node
{
    int key;
    struct node *left,*right;

};
struct node *root=NULL;
node *createnode(int x)
{
    node *temp=new node;
    temp->key=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
node* insert1(struct node* node,int item)
{
    if(node==NULL)
        return createnode(item);
    if(item < node->key)
        node->left=insert1(node->left,item);
    else if(item>node->key)
        node->right=insert1(node->right,item);
    return node;
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
void preorder(struct node *root)
{
    if (root!=NULL)
    {
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
}
int main()
{
    int i,n,x,num;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        root=insert1(root,x);
    }
    cout<<"Inorder:"<<endl;
    inorder(root);
    cout<<endl<<"Preorder:"<<endl;
    preorder(root);
    cout<<endl<<"Postorder:"<<endl;
    postorder(root);
    return 0;
}
