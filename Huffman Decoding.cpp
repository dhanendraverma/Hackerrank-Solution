

void decode_huff(node * root, string s) {
    node *temp = root;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0')
            root = root->left;
        else
            root = root->right;
        if(!root->left && !root->right)
        {
            cout<<root->data;
            root = temp;
        }


    }

}
