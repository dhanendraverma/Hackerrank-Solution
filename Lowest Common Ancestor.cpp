
Node *lca(Node *root, int v1,int v2)
    {
        if(!root)
            return NULL;
        if(root->data==v1 || root->data==v2)
            return root;

        Node *l = lca(root->left, v1, v2);
        Node *r = lca(root->right,v1, v2);

        if(l && r) return root;

        return (l!=NULL)?l:r;



    }
