#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define mp make_pair
#define PI 3.14159265358979323
#define debug(x) cout<<"Case "<<x<<": "
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long int           ll;
typedef long double             ld;
typedef unsigned long long int ull;
typedef vector <int>            vi;
typedef vector <ll>            vll;
typedef pair <int, int>        pii;
typedef pair <ll, ll>          pll;
typedef vector < pii >        vpii;
typedef vector < pll >        vpll;
typedef vector <string>         vs;

//Handle:cyber_rajat

//defintion of structure node
struct node
{
   int data;
   node *next,*prev;
};
//decleration of functions
void quicksort(node *head,node *end);
node* partition(node *head,node *end);
void swap(int *p,int* q);
void insertion_at_end(node **head,node **tail,int data);
void display(node *p);
int main()
{
    int data,choice,pos;
    node *head=NULL,*end=NULL;
    while(1)
    {
        cout<<"\nEnter your choice"
            <<"\n1.Insertion at end of list"
            <<"\n2.Display list"
            <<"\n3.Sort the List using Quick sort technique"
            <<"\n4.Exit::::";
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"\nEnter the data to insert:";
                    cin>>data;
                    insertion_at_end(&head,&end,data);
                    break;
            case 2:display(head);
                    break;
            case 3:quicksort(head,end);
                    cout<<"\nList After Quick Sort:::";
                    display(head);
                    break;
            case 4:exit(0);
            default:cout<<"\nInvalid input";
        }
    }
return 0;
}
//recursive function for quick sort
void quicksort(node *head,node *end)
{
  if(head!=NULL && head!=end && head->next !=end)
  {
    node* q;
    q=partition(head,end);
    quicksort(head,q->prev);
    quicksort(q->next,end);
   }
}
//function for partitioning the list 
node* partition(node *head,node *end)
{
    int pivot=end->data;
    node *q,*temp=NULL;
    q=head;
    temp=head;
    
    while(temp!=end)
    {
        if(head->data<=pivot)
        {
            q=q->next;
        }
        else if((temp->data)<=pivot)
        {
            swap(&(temp->data),&(q->data));
            q=q->next;
        }
        temp=temp->next;
   }
   swap(&(q->data),&(end->data));       
   return q;
}
//swap the data of two nodes
void swap(int * p,int * q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
//insertion at the end of list
//here head and end are passed by reference 
void insertion_at_end(node **head,node **tail,int data)
{
    node *ptr=NULL;
    ptr=new node;
    ptr->data=data;
    if(*head==NULL)
    {
        ptr->prev=ptr->next=NULL;
        *head=(*tail)=ptr;
    }
    else
    {
        (*tail)->next=ptr;
        ptr->prev=*tail;
        ptr->next=NULL;
        *tail=ptr;
    }
}
//Display the list
void display(node *p)
{
    cout<<"\nList is::";
    if(p==NULL)
    {
        cout<<"\nList is Empty";
        return;
    }
    while(p!=NULL)
    {
        cout<<" -> "<<p->data;
        p=p->next;
    }

