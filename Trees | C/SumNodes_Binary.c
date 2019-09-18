#include<stdio.h>
#include<malloc.h>

struct btnode
{
    int value;
    struct btnode *l;
    struct btnode *r;
};
struct btnode *root = NULL;
int sum;

Function Prototypes:

void in_order_traversal(struct btnode *);
void in_order_sum(struct btnode *);
struct btnode *newnode(int);

void main()
{
    /* Inserting elements in the binary tree */
    root = newnode(50);
    root->l = newnode(20);
    root->r = newnode(30);
    root->l->l = newnode(70);
    root->l->r = newnode(80);
    root->l->l->l = newnode(10);
    root->l->l->r = newnode(40);
    root->l->r->r = newnode(60);
    printf("The elements of Binary tree are:");
    in_order_traversal(root);
    in_order_sum(root);
    printf("\nThe sum of all the elements are:%d", sum);
}

Function to dynamically create new nodes:
struct btnode* newnode(int value)
{
    struct btnode *temp = (struct btnode *)malloc(sizeof(struct btnode));
    temp->value = value;
    temp->l = NULL;
    temp->r = NULL;
    return temp;
}

Function to display the elements of the binary tree:
void in_order_traversal(struct btnode *p)
{
    if (!p)
        {
            return;
        }
    in_order_traversal(p->l);
    printf("%d->",  p->value);
    in_order_traversal(p->r);
}

Function to find the sum of all elements in the tree:
void in_order_sum(struct btnode *p)
{
    if (!p)
        {
            return;
        }
    in_order_sum(p->l);
    sum = sum + p->value;
    in_order_sum(p->r);
}
