#include<stdio.h>
#include<stdlib.h>

struct btnode
{
    int value;
    struct btnode * l;
    struct btnode * r;
};

typedef struct btnode bt;

bt *root;
bt *new, *list;
int count = 0;

bt * create_node();
void display(bt *);
void construct_tree();
void count_leaf(bt *);

void main()
{
    construct_tree();
    display(root);
    count_leaf(root);
    printf("\n leaf nodes are : %d",count);
}

/* To create a empty node */
bt * create_node()
{
    new = (bt *)malloc(sizeof(bt));
    new->l = NULL;
    new->r = NULL;
}

/* To construct a tree */
void construct_tree()
{
    root = create_node();
    root->value = 50;
    root->l = create_node();
    root->l->value = 20;
    root->r = create_node();
    root->r->value = 30;
    root->l->l = create_node();
    root->l->l->value = 70;
    root->l->r = create_node();
    root->l->r->value = 80;
    root->l->r->r = create_node();
    root->l->r->r->value = 60;
    root->l->l->l = create_node();
    root->l->l->l->value = 10;
    root->l->l->r = create_node();
    root->l->l->r->value = 40;
}

/* To display the elements in a tree using inorder */
void display(bt * list)
{
    if (list == NULL)
        {
            return;
        }
    display(list->l);
    printf("->%d", list->value);
    display(list->r);
}

/* To count the number of leaf nodes */
void count_leaf(bt * list)
{
    if (list == NULL)
        {
            return;
        }
    if (list->l == NULL && list->r == NULL)
        {
            count++;
        }
    count_leaf(list->l);
    count_leaf(list->r)
