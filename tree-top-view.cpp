//https://www.hackerrank.com/challenges/tree-top-view/problem

void topView(Node * root) 
    {
        queue<pair<int,Node*>> q;   //stroes 'horizonal distance of node from the root' and the 'node pointer' as pair 
        
        q.push(make_pair(0,root));  //stored root 
        
        map<int,Node*> ans; 
        
        //In map ans:
        //int is the key , Node* is the value
        //int = horizontal distance of the node from the root
        //Node* = pointer to node
        
        for(auto i=q.front();!q.empty();q.pop(),i=q.front())  //great for loop implementation
        {
            if(!i.second) 
                continue;
            
            ans.insert(i);  //map does not allow duplicate keys

            q.push(make_pair(i.first+1,i.second->right));   //incrementing key on moving right of the tree
            q.push(make_pair(i.first-1,i.second->left));    //decrementing key on moving left of the tree
        }
        for(auto i:ans) 
            cout<<i.second->data<<" ";
    }
