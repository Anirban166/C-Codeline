#include<stdio.h>
#include<stdlib.h>

struct btnode
{
    int value;
    struct btnode *left, *right;
};
typedef struct btnode node;

void insert(node *, node *);
void inorder(node *);
void largest(node *);

void main()
{
    node *root = NULL, *new = NULL ;
    int num = 1;
    printf("Enter the elements of the tree(enter 0 to exit)\n");
    while (1)
        {
            scanf("%d",  &num);
            if (num == 0)
                break;
            new = malloc(sizeof(node));
            new->left  =  new->right  =  NULL;
            new->value  =  num;
            if (root  ==  NULL)
                root = new;
            else
                {
                    insert(new, root);
                }
        }
    printf("elements in a tree in inorder are\n");
    inorder(root);
    largest(root);
}

/* displaying nodes of a tree using inorder */

void inorder(node *root)
{
    if (root != NULL)
        {
            inorder(root->left);
            printf("%d -> ", root->value);
            inorder(root->right);
        }
}

/* inserting nodes into the tree */

void insert(node * new, node *root)
{
    if (new->value > root->value)
        {
            if (root->right  ==  NULL)
                root->right  =  new;
            else
                insert (new, root->right);
        }
    if (new->value < root->value)
        {
            if (root->left  == NULL)
                root->left = new;
            else
                insert(new, root->left);
        }
}

/* finding largest node in a tree */
void largest(node *root)
{
    if (root->right  == NULL)
        {
            printf("largest element is %d", root->value);
        }
    while (root != NULL && root->right != NULL)
        {
            root = root->right;
        }
    printf("\nlargest value is %d\n", root->value);
}
