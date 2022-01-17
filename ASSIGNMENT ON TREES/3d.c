#include <stdio.h> 
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
int HEIGTH(struct node *node)
{
    if (node == NULL)
        return -1;
    else
    {
        int lDepth = HEIGTH(node->left);
        int rDepth = HEIGTH(node->right);
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}
struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
int main()
{
    struct node *root = newNode(4);
    root->left = newNode(6);
    root->right = newNode(23);
    root->left->left = newNode(42);

    root->left->right = newNode(52);
    printf("Height of tree is %d", HEIGTH(root));
    return 0;
}