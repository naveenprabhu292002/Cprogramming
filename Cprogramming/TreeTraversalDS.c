#include<stdio.h>
#include<stdlib.h>
struct node
{
    int item;
    struct node *left;
    struct node *right;
};
void inordertraversal(struct node *root)
{
    if(root==NULL)
    return;
    inordertraversal(root->left);
    printf("%d-> ",root->item);
    inordertraversal(root->right);
}
void preordertraversal(struct node *root)
{
    if(root==NULL)
    return;
    printf("%d-> ",root->item);
   preordertraversal(root->left);
    preordertraversal(root->right);
}
void postordertraversal(struct node *root)
{
    if(root==NULL)
    return;
    postordertraversal(root->left);
    postordertraversal(root->right);
     printf("%d-> ",root->item);
}
struct node *createnode(value)
{
    struct node *newnode=malloc(sizeof(struct node));
    newnode->item=value;
    newnode->left=NULL;
    newnode->right=NULL;
};
struct node *insertleft(struct node *root,int value)
{
    root->left=createnode(value);
}
struct node *insertright(struct node *root,int value)
{
    root->right=createnode(value);
};
int main()
{
    struct node *root=createnode(1);
    insertleft(root,3);
    insertright(root,5);
    insertleft(root->left,6);
    insertright(root->right,8);
    printf("inorder traversal: ");
    inordertraversal(root);
    printf("\npreorder traversal: ");
    preordertraversal(root);
    printf("\npostorder traversal: ");
    postordertraversal(root);

}

