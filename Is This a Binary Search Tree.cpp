
bool check(Node * node, int min, int max)
{
    if(!node)
        return true;

    if((node->data <= min) || (node->data >= max))
        return false;

    return (check(node->left, min, node->data) && check(node->right, node->data, max));
}


bool checkBST(Node* root) {
    return check(root, -1, 10001);

}
