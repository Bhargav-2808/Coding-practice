// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
using namespace std;

class Node 
{
    public:
    int data;
    Node* left;
    Node* right;
        
    Node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* buildtree(Node* &root)
{
    int data;
    cout<<"Enter the data of root Node"<<endl;
    cin>>data;
    
    root = new Node(data);
    
    if(data == -1)
    {
        return NULL;
    }
    
    cout<<"Enter data for inserting left of "<<data<<endl;
    root->left = buildtree(root->left);
    cout<<"Enter data for inserting right of "<<data<<endl;
    root->right = buildtree(root->right);
    
    return root;
}


void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    
    q.push(root);
    q.push(NULL);
    
    while(!q.empty())
    {
        Node* temp  = q.front();
        
        q.pop();
        if(temp ==  NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<" "<<temp->data;
            if(temp->left)
            {
                q.push(temp->left);
            }
        
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
        
    }
}

void inorder(Node* root)
{
    
    if(root == NULL)
    {
        return ;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root)
{
    
    if(root == NULL)
    {
        return ;
    }
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root)
{
    
    if(root == NULL)
    {
        return ;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


void buildFromLevelOrder(Node* &root) {
    queue<Node*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new Node(data);
    
    q.push(root);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new Node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new Node(rightData);
            q.push(temp->right);
        }
    }
 }


int main() {
   
    Node* root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //root = buildtree(root);
    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}
