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

Node* deleteFromBST(Node* root, int val){
    if(root == NULL){
        return root;
    }

    if(root->data == val){
        // 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        // 1 child
        // For left child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // For right child
        if(root->right != NULL && root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if(root->left != NULL && root->right != NULL){
            int mini = minValue(root->right) -> data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }

    }
    else if(root->data > val){
        // traverse in left
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else{
        // traverse in right
        root->right = deleteFromBST(root->right, val);
        return root;
    }
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

    // 50 20 70 10 30 90 110 -1
    Node* root = NULL;

    cout << "Enter data to create BST:- " << endl;
    takeInput(root);

    cout << "Printing the BST" << endl;
    levelOrderTraversal(root);

    cout << "Inorder traversal is: ";
    inorder(root);


    // Deletion
    root = deleteFromBST(root, 90);

    cout << endl << "Printing the BST" << endl;
    levelOrderTraversal(root);

    cout << "Inorder traversal is: ";
    inorder(root);
}
