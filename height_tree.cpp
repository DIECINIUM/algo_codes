#include<bits/stdc++.h>
using namespace std ;
class node {
public:
    int data;
    node *left, *right;
};
node* neNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
 
    return (Node);
}
int height(node* node)
{
    if (node == NULL)
        return 0;
    else {
         
        // Compute the height of each subtree
        int lheight = height(node->left);
        int rheight = height(node->right);
 
        // Use the larger one
        if (lheight > rheight) {
            return (lheight + 1);
        }
        else {
            return (rheight + 1);
        }
    }
}
int main(){
     node* root = neNode(1);         // creating the tree 
    root->left = neNode(2);
    root->right = neNode(3);
    root->left->left = neNode(4);
    root->left->right = neNode(5);
    root->left->left->left=neNode(6) ;
    root->left->left->right=neNode(7) ;

    cout<<"height of tree "<<height(root) ;

}