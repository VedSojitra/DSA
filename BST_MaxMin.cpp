#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertIntoBst(Node* root, int d){
    // base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d > root->data){
        // right part me insert
        root->right = insertIntoBst(root->right, d);
    }
    else{
        // left part me insert
        root->left = insertIntoBst(root->left, d);
    }
    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            // one level is traversed
            cout << endl;
            if(!q.empty()){
                // queue still has some child nodes
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " ";
            if(temp -> left){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

void inorder(Node* root){
    if(root == NULL){
        return ;
    }

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

Node* minValue(Node* root){
    Node* temp = root;

    while(temp->left != NULL){
        temp = temp -> left;
    }
    return temp;
}

Node* maxValue(Node* root){
    Node* temp = root;

    while(temp->right != NULL){
        temp = temp -> right;
    }
    return temp;
}

void takeInput(Node* &root){
    int data;
    cin >> data;

    while( data != -1){
        root = insertIntoBst(root, data);
        cin >> data;
    }
}

int main(){
    Node* root = NULL;

    // 50 20 70 10 30 90 110 -1
    cout << "Enter data to create BST:- " << endl;
    takeInput(root);

    cout << "Printing the BST" << endl;
    levelOrderTraversal(root);

    cout << "Inorder traversal is: ";
    inorder(root);

    cout << endl << "Min value is " << minValue(root) -> data << endl;
    cout << "Max value is " << maxValue(root) -> data << endl;
}
