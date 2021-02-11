#include <bits/stdc++.h>
using namespace std;

class node
{
public:
  int data;
  node *next;
};
node *head = NULL;
void create(int a[], int n)
{
  node *p, *temp;
  head = new node();
  head->data = a[0];
  head->next = NULL;
  temp = head;

  for (int i = 1; i < n; i++)
  {
    p = new node();
    p->data = a[i];
    p->next = NULL;
    temp->next = p;
    temp = p;
  }
}

void display(node *p)
{
  while (p != NULL)
  {
    cout << p->data << " ";
    p = p->next;
  }
}
void recursiveDisplay(node *p)
{
  if (p != NULL)
  {
    cout << p->data << " ";
    recursiveDisplay(p->next);
  }
}
int count(node *p)
{
  int count = 0;
  while (p != 0)
  {
    count++;
    p = p->next;
  }
  return count;
}
int sum(node *p)
{
  int sum = 0;
  while (p != 0)
  {
    sum += p->data;
    p = p->next;
  }
  return sum;
}
int max(node *p)
{
  int max = INT16_MIN;
  while (p != 0)
  {
    if (p->data > max)
    {
      max = p->data;
    }
    p = p->next;
  }
  return max;
}
node *search(node *p, int key)
{

  while (p != NULL)
  {
    if (key == p->data)
    {
      return p;
    }
    p = p->next;
  }
  return NULL;
}
void insert(int pos, int x)
{
  node *p, *t;
  if (pos == 0)
  {
    t = new node();
    t->data = x;
    t->next = head;
    head = t;
  }
  else if (pos > 0)
  {

    p = head;
    for (int i = 0; i < pos - 1 && p; i++)
    {
      p = p->next;
    }
    if (p != NULL)
    {
      t = new node();
      t->data = x;
      t->next = p->next;
      p->next = t;
    }
  }
}
int deleteNode(int pos){
if(pos<1||pos>count(head)){
  return -1;
}
else
{   node *p=head;
   if (pos==1)
   {
    head=p->next;
    delete p;
    return 0; 
   }
   else{
     node *q=NULL;
     for(int i=0;i<pos-1;i++){
         q=p;
         p=p->next;
     }
     q->next=p->next;
     
     delete p;
     return 1;
   }

}

}
// struct node* reverseList(struct node *head)
// {
    
//     struct Node *p,*temp;
//     p=head->next;
//     head->next=NULL;
//     while(p!=NULL){
//         temp=p->next;
//         p->next=head;
//         head=p;
//         p=temp;
        
//     }
//     return head;
//     // return head of reversed list
// }

node* removeDuplicates( node *head) 
{      
  
    
    int a[100000]={0}; 
    node* temp;  node *p;
    temp= head; p= temp->next;
 
    while(p!=NULL)
    {   
        a[temp->data]= temp->data;
        if(a[p->data]==p->data)
        {
            temp->next= p->next;
            p->next= NULL;
            p= temp->next;
        }
        else
        {
            temp= temp->next;
            p= p->next;
        }
    }
    
    return head;
}

int main()
{
  freopen("D:/vscode/io/input.txt", "r", stdin);
  freopen("D:/vscode/io/output.txt", "w", stdout);
  int arr[] = {3,4,5,5,3,6};
  create(arr, 6);
  // removeDuplicates(head);
  display(removeDuplicates(head));
  // recursiveDisplay(head);
  // cout << endl
  //      << count(head);
  // cout << endl
  //      << sum(head);
  // cout << endl
  //      << max(head);
  // cout << endl
  //      << search(head, 4)->data;
  // insert(2,8);
  // cout<<endl;
  // display(head);
  // cout<<endl<<deleteNode(5);
  //  cout<<endl;
  // display(head);
  return 0;
}