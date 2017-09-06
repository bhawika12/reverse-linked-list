#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
};
class node1
{
public:
    node *temp;
    node *Swap;
    node *start=NULL;
    node *newnode;
    void createnode()
    {
        newnode=new node();
        cout<<"element:-";
        newnode->prev=NULL;
        cin>>newnode->data;
        newnode->next=NULL;
    }
    void insertion()
    {
        int n;
        cout<<"enter the number of elements";
        cin>>n;
        temp=start;
        for(int i=0;i<n;i++)
        {
            createnode();
            if(start==NULL)
            {
                start=newnode;
            }
            else
            {
                newnode->next=start;
                start->prev=newnode;
                start=newnode;
            }
        }
    }
    void reverse_node()
    {
        node *t;
        while(temp!=NULL)
        {
            t=temp->prev;
            temp->prev=temp->next;
            temp->next=t;
            temp=temp->next;
        }
    }
    void display()
    {
        temp=start;
        while(temp->next!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<" "<<endl;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
    }
};
int main()
{
    node1 n;
    n.insertion();
    n.display();
}

