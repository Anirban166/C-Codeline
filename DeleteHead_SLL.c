//Structure:
{ int data;
  struct x*next;
};
typedef struct x node;
node *root=NULL;

//Function to delete a node from the beginning (current head node) of a SLL:
func()
{ node *t=root;
  root=root->next;
  free(t);
}
