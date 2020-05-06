// https://www.hackerrank.com/challenges/tree-inorder-traversal/problem

/*

Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void inOrder(Node *root) {

        if(!root)
            return;
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
