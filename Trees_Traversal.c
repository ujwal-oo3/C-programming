#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int key;
    struct Node *left,*right;
};
typedef struct Node *node;
node create (int item);
node insert (node root,int key);
void postorder(node root);
void preorder(node root);
void inorder(node root);
int main()
{
    int c,num,i,n;
    node root=NULL;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element\n");
        scanf("%d",&num);
        root=insert(root,num);
    }
    while(1)
    {
       printf("\n\n1.Post order\n2.Pre order\n3.In order\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1: printf("\nPost order traversal:\n");
            postorder(root);
            break;
    case 2: printf("\nPre order traversal:\n");
            preorder(root);
            break;
    case 3:printf("\nIn order traversal:\n");
            inorder(root);
            break;
    default: exit(0);
    }
    }
}
node create(int item)
{
    node temp=malloc(sizeof(struct Node));
    temp->key=item;
    temp->left=temp->right=NULL;
    return temp;
}
node insert(node root,int key)
{
    if(root==NULL)
        return create(key);
    if(key<root->key)
        root->left=insert(root->left,key);
    else
        root->right=insert(root->right,key);
    return root;
}
void postorder(node root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->key);
    }
}
void preorder(node root)
{
    if(root!=NULL)
    {
         printf("%d\t",root->key);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(node root)
{
     if(root!=NULL)
     {
         inorder(root->left);
         printf("%d\t",root->key);
         inorder(root->right);
     }
}
