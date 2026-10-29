#include<iostream>
#include<queue>
#include<vector>

using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

static int idx = -1;

Node* buildtree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1) return NULL;

    Node* root = new Node(preorder[idx]);
    root->left = buildtree(preorder);
    root->right = buildtree(preorder);

    return root;
}

void preOrder(Node* root){

    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}

void inOrder(Node* root){

    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}

void postOrder(Node* root){

    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";

}

void levelOrder(Node* root){
    queue<Node*> q;

    q.push(root);

    while(q.size() > 0){

        Node* curr = q.front();
        q.pop();

        cout<<curr->data<<"  ";

        if(curr->left != NULL){
            q.push(curr->left);
        }

        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
    cout<<endl;
}

int main(){

    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildtree(preorder);
    cout<<root->data<<endl;

    preOrder(root);
    cout<<endl;

    cout<<"\nInOrder Traversal : "<<endl;
    inOrder(root);

    cout<<"\nPostOrder Traversal : "<<endl;
    postOrder(root);

    cout<<"\nLevelOrder Traversal : "<<endl;
    levelOrder(root);
}