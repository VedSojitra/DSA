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
