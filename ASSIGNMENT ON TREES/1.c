#include<stdio.h> 
#include<stdlib.h> 
struct BinartTreeNode
{
    int key;
    struct BinartTreeNode *left;
    struct BinartTreeNode *right;
};
struct BinartTreeNode *newNode(int item)
{
    struct BinartTreeNode *temp = (struct BinartTreeNode *)malloc(sizeof(struct BinartTreeNode));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct BinartTreeNode *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}
struct BinartTreeNode *insert(struct BinartTreeNode *node, int key)

{
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    return node;
}
int main()
{
    struct BinartTreeNode *root = NULL;
    root = insert(root, 10);
    insert(root, 3);
    insert(root, 2);
    insert(root, 1);
    insert(root, 4);

    insert(root, 9);
    insert(root, 8);
    insert(root, 10);
    insert(root, 12);
    insert(root, 14);
    inorder(root);
    return 0;
}