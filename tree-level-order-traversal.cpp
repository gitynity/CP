// https://www.hackerrank.com/challenges/tree-level-order-traversal/problem

void levelOrder(Node * root) 
{
    queue<Node*> q;
    q.push(root);

    for( auto i = q.front();!q.empty();q.pop() , i = q.front() )
    {
        
        if(!i)
           return;

        cout<<i->data<<" ";  

        if(i->left)
          q.push(i->left);

        if(i->right)
          q.push(i->right);
            
    }
}
