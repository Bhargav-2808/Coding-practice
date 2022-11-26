// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
  public:
    int data;
    Node* prev;
    Node* next;
    
         Node(int data)
        {
            this->data = data;
            this->next=NULL;
            this->prev=NULL;
        }
      
        ~Node()
        {
            int val = this->data;
            
            while(next!=NULL)
            {
                delete next;
                next=NULL;
            }
            cout << "memory free for node with data "<< val << endl;
        }
};

void insertAtHead(Node* &head, Node* &tail , int data)
{
    if(head==NULL)
    {
        Node* node1 = new Node(data);
        head=node1;
        tail=node1;
       
    }
    else
    {
        Node* node1 = new Node(data);
        node1-> next = head;
        head-> prev = node1;
        head = node1;
    }
}

void insertAtTail(Node* &head, Node* &tail , int data)
{
    if(tail==NULL)
    {
        Node* node1 = new Node(data);
        head=node1;
        tail=node1;
    }
    else
    {
        Node* node1 = new Node(data);
        tail->next = node1;
        node1->prev = tail;
        tail =node1; 
    }
}

void insertPos(Node* &head, Node* &tail , int pos, int data)
{
    if(pos==1)
    {
        insertAtHead(head,tail,data);
        return;
    }
    
    int count =1 ;
    Node* temp = head;
    
    while(count < pos-1) {
        temp = temp->next;
        count++;
    }
    

    
    if(temp->next== NULL)
    {
        insertAtTail(head,tail,data);
        return;
    }
    
    Node* nodeInsert = new Node(data);
    
    nodeInsert->next = temp->next;
    temp->next->prev = nodeInsert;
    temp->next = nodeInsert;
    nodeInsert -> prev = temp;
    
}



void deletePos(Node* &head, Node* &tail , int pos)
{
    if(pos == 1)
    {
        Node* temp  = head;
        temp->next->prev = NULL;
        head = temp->next;
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
            prev= curr;
            curr = curr->next;
            cnt++;
        }
        
        curr->prev = NULL;
        prev->next=curr->next;
        curr->next = NULL;
        delete curr;
    }
    
}
void print(Node* head) {
    Node* temp  = head ;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp  = temp -> next;
    }
    cout << endl;
}

int main() {
    // Write C++ code here
    Node* head = NULL;
    Node* tail = NULL;
    
    insertPos(head,tail,1,1);
    insertPos(head,tail,2,2);
    insertPos(head,tail,2,3);
    insertPos(head,tail,2,4);
    insertPos(head,tail,2,2);
    insertPos(head,tail,2,3);
    insertPos(head,tail,2,4);
    print(head);
    deletePos(head,tail,2);
   
      deletePos(head,tail,2);
  print(head);
    return 0;
}
