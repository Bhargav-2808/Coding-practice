#include <bits/stdc++.h>
#include <iostream>

using namespace std;
class Node {
  public:
    int data;
    Node* next;

  Node(int d)
  {
    this->data = d;
    this->next = NULL;
  }
  ~Node()
  {
      int val  = this->data;
      while(this->next!=NULL)
      {
          delete next;
          this->next = NULL;
      }
      cout<<" Deleted Value is "<<val<<endl;
  }
};


void insertathead(Node* head , int d)
{

   
        Node* node1 = new Node(d);
        node1-> next = head;
        head = node1;
    
}

void insertattail(Node* tail,int d)
{
    Node* node1 = new Node(d);
    node1->next = tail;
    node1 = tail;
    
    
}

void insertnode(Node* &head,Node* & tail, int position,int d)
{
    if(position == 1)
    {
        insertathead(head,d);
        
    }
    
    int count  = 1;
    Node* temp = head;
    
    while(count<position)
    {
        temp = temp->next;
        count++;
    }
    
    if(temp->next == NULL)
    {
        insertattail(tail,d);
    }
    
    Node* newData = new Node(d);
    newData -> next = temp->next;
    temp->next = newData;
}

void deletenode(Node* &head,  int pos)
{
    if(pos==1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<pos)
        {
            
            prev = curr;
            curr = curr->next;
           
            cnt++;
        }
        
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        
        
        
        
    }
}


void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<endl;
}

int main() {

  Node* head = NULL;
  Node* tail = NULL;
  
  if(head == NULL)
  {
    Node* newData = new Node(1);
    head = newData;
  }
  
  insertathead(head,1);
  insertnode(head,tail,1,1);
  insertnode(head,tail,1,2);
  insertnode(head,tail,1,3);
  insertnode(head,tail,2,2);
    print(head);
  deletenode(head,3);
  
  print(head);
  deletenode(head,1);
  print(head);
 
  
  
  
  
}
