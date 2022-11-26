// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
        
        
    }
    
};

void insertNode(Node* &tail,int pos, int data)
{
    if(tail ==  NULL)
    {
        Node * node1 = new Node(data);
        tail = node1;
        node1->next = node1;
    }
    else
    {
        Node* curr = tail;
        while(curr->data != pos)
        {
            curr = curr->next;
        }
        
        Node * temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteN(Node* &tail,int val)
{
    if(tail  == NULL)
    {
        cout<<"List is Empty"<<endl;
    }
    else
    {
        Node* prev = tail;
        Node* curr =  prev->next;
        
        while(curr->data!= val)
        {
            prev= curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        
        
        if(curr == prev)
        {
            tail = NULL;
        }
        else if(tail =  curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
        
    }
    
    
    
}

void print(Node* tail)
{
    if(tail == NULL)
    {
        cout<<"LL is Empty "<<endl;
    }
    
    Node* temp = tail;
    
    do{
        cout<<temp->data<<endl;
        temp = temp->next;
        
    }while(temp!=tail);
    
}


int main() {
    // Write C++ code here
    Node* tail = NULL;
    
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);
    deleteN(tail, 5);
    print(tail);
    return 0;
}
