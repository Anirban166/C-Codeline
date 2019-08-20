//Structure:
struct x
{ int data;
  struct x *next;
};
typedef struct x node;
node *root=NULL,*rear=NULL;

//Function to delete a node from the start (head) of a CLL:
func()
{ node *k=root;
  root=root->next;
  rear->next=root;
  free(k);
}
