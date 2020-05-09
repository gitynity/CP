// https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor/problem

Node *lca(Node *root, int v1,int v2) 
    {
        if(root == nullptr)
            {
                if(v1<v2)
                    root = new Node(v1);
                else
                    root = new Node(v2);

                return root;
            }

		else if(v1 < root->data && v2 > root->data)
            return root;
        else if(v1 > root->data && v2 < root->data)
            return root;
        else if(v1 == root->data || v2 == root->data)
            return root;
        else 
        {
            if(v1 < root->data)
               root = lca(root->left , v1 , v2);
            else
               root = lca(root->right , v1 ,v2);    
        }
    return root;
    }
