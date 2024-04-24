#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int key;
    struct Node *left, *right;
};

typedef struct Node *node;


node create(int item);
node insert(node root, int key);
void preOrder(node root);
int main()
{
    node root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    printf("Pre-order traversal:\n");
    preOrder(root);

    return 0;
}

node create(int item)
{
    node temp = malloc(sizeof(struct Node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void preOrder(node root)
 {
    if (root != NULL)
    {
        printf("%d\t", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}


node insert(node root, int key)
{
    if (root == NULL)
        return create(key);

    if (key < root->key)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);

    return root;
}

