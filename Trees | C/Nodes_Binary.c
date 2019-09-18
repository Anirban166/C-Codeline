#include<stdio.h>
#include<stdlib.h>

struct btnode
{
    int value;
    struct btnode *l;
    struct btnode *r;
};

void createbinary();
void preorder(node *);
int count(node*);
node* add(int);

typedef struct btnode node;
node *ptr, *root = NULL;

int  main()
{
    int c;
    createbinary();
    preorder(root);
    c = count(root);
    printf("\nNumber of nodes in binary tree are:%d\n", c);
}
/*
 * constructing the following binary tree
 *     50
 *     / \
 *    20 30
 *   / \
 *  70 80
 * / \     \
 *10 40      60
 */
void createbinary()
{
    root = add(50);
    root->l = add(20);
    root->r = add(30);
    root->l->l = add(70);
    root->l->r = add(80);
    root->l->l->l = add(10);
    root->l->l->r = add(40);
    root->l->r->r = add(60);
}

// Add the node to binary tree
node* add(int val)
{
    ptr = (node*)malloc(sizeof(node));
    if (ptr == NULL)
        {
            printf("Memory was not allocated");
            return;
        }
    ptr->value = val;
    ptr->l = NULL;
    ptr->r = NULL;
    return ptr;
}

int count(node *n)
{
    int c = 1;
    if (n == NULL)
        return 0;
    else
        {
            c += count(n->l);
            c += count(n->r);
            return c;
        }
}

void preorder(node *t)
{
    if (t != NULL)
        {
            printf("%d->", t->value);
            preorder(t->l);
            preorder(t->r);
        }
}
