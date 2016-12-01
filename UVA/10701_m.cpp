#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

struct node
{
    char data;
    node *left;
    node *right;
};

class bst
{
    node *head;
    node *curleft;
    node *curright;
public:
    bst()
    {
        head=new node();
        head->left=NULL;
        head->right=NULL;
        head->data=NULL;
        curleft=new node();
        curleft=head;
        curright=new node();
        curright=head;
    }
    void insert1(char a)
    {
        if(head->data==NULL)
        {
            head->data=a;
        }
        else
        {
            node *z=new node;
            z->data=a;
            z->left=NULL;
            z->right=NULL;
            curleft->left=z;
            curleft=curleft->left;
        }
    }
    void insert2(char a)
    {
        node *z=new node;
        z->data=a;
        z->left=NULL;
        z->right=NULL;
        curright->right=z;
        curright=curright->right;

    }
    node *get_root()
    {
        return head;
    }
    void inorder(node *temp)
    {
        if(temp!=NULL)
        {
            inorder(temp->left);
            cout<<temp->data;
            inorder(temp->right);
        }
    }
    void preorder(node *temp)
    {
        if(temp!=NULL)
        {
            cout<<temp->data;
            preorder(temp->left);
            preorder(temp->right);
        }
    }
    void postorder(node *temp)
    {
        if(temp!=NULL)
        {
            postorder(temp->left);
            postorder(temp->right);
            cout<<temp->data;

        }
    }
    void reset()
    {
        head->left=NULL;
        head->right=NULL;
        head->data=NULL;
        curleft=head;
        curright=head;
    }
};

int main()
{
    freopen("file.txt","r",stdin);
    bst t;
    char a[53],b[53];
    int x,z,p;
    scanf("%d",&x);
    for(int i=1; i<=x; i++)
    {
        int y;
        scanf("%d",&y);
        scanf("%s",a);
        scanf("%s",b);
        for(int j=0; j<strlen(b); j++)
        {
            if(a[0]==b[j])
            {
                z=j;
                break;
            }
        }
        for(int j=z; j>=0; j--)
        {
          t.insert1(b[j]);
        }
        for(int j=z+1; j<strlen(b); j++)
        {
            t.insert2(b[j]);
        }
        t.postorder(t.get_root());
        cout<<endl;
        t.reset();
    }
}
