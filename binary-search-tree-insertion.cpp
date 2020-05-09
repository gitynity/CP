// https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem

Node * insert(Node * root, int data)
    {

    if (!root) 
    {
        root = new Node(data);
        root->data = data;
        return root;          
    }
    if (data < root->data)
        root->left = insert(root->left, data);  // root->left is assigned new value
    else 
        root->right = insert(root->right, data); //root->right is assigned new value

    return root;  //see in main() , in first call to insert(root,data) , root is null    
                 //see in main() ,same root is passed in insert(root, data) everytime  
                 
    // note:  always see how the call is made in the main() and then code your logic 

    }
