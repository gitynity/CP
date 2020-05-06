// https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

They have considered root to be at level -1.

*/
    int height(Node* root) 
    {
        if(!root)
            return -1;
        else 
        {
            int l = height(root->left);
            int r = height(root->right);
        
            return 1 + max( l,r );
        }        
    }
