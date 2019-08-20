//Structure:
struct x
{ int data;
  struct x *next;
};
typedef struct x node;
node *root=NULL,*rear=NULL;

//Function to delete a node from the end of a CLL:
func()
{ node *t=root;
  while(t->next!=root)
  { node *k=t; //k will stop at last node, before root.
    t=t->next;
  }
  k->next=root; //Link up next before deletion.
  free(k);
}
