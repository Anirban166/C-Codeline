#include<stdio.h>
#include<stdlib.h>

struct btnode
{
    int value;
    struct btnode *l;
    struct btnode *r;
}*root = NULL, *ptr, *temp;

// Function Prototypes:

int find_depth(struct btnode *);
int modify_tree(struct btnode *);
void printout(struct btnode *);
struct btnode* newnode(int);

void main()
{  
    int d; //create tree:
    root  =  newnode(50);
    root->l  =  newnode(20);
    root->r  =  newnode(30);
    root->l->l  =  newnode(70);
    root->l->r  =  newnode(80);
    root->l->r->r  =  newnode(60);
    root->l->l->l  =  newnode(10);
    root->l->l->r  =  newnode(40);
    printout(root);
    ptr = root;
    d = find_depth(ptr);
    printf("Depth of tree is %d\n",d);
    printf("tree elements after modification are ----\n");
    modify_tree(ptr);
    printout(ptr);
}

// Create a node:
struct btnode* newnode(int value)
{
    struct btnode* node  =  (struct btnode*)malloc(sizeof(struct btnode));
    node->value  =  value;
    node->l  =  NULL;
    node->r  =  NULL;
    return(node);
}

// Function to find depth of a tree:
int find_depth(struct btnode* tree)
{
    int ldepth, rdepth;
    if (tree == NULL)
        return 0;
    else
        {
            ldepth = find_depth(tree->l);
            rdepth = find_depth(tree->r);
            if (ldepth > rdepth)
                return ldepth + 1;
            else
                return rdepth + 1;
        }
}

// Function to modify the tree:
int modify_tree(struct btnode *tree)
{
    int i, original;
    if (tree == NULL)
        return 0;
    original = tree->value;
    tree->value = modify_tree(tree->l) + modify_tree(tree->r);
    return tree->value + original;
}

// Function to print the elements of tree:
void printout(struct btnode *tree)
{
    if (tree->l)
        printout(tree->l);
    printf("%d\n", tree->value);
    if (tree->r)
        printout(tree->r);
}
