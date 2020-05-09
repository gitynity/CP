// https://www.hackerrank.com/challenges/tree-huffman-decoding/problem

void decode_huff(node * root, string s) 
{

    auto l = s.size();
    int i = 0;
    auto temp = root;
    while(i<l)
    {
        while(root->data == '\0')
        {
            if(s[i]=='0')
                root=root->left;
            else root=root->right;

            i++;    
        }
        cout<<root->data;
        root = temp;
    }
  
}
