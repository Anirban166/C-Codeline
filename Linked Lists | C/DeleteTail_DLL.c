//Structure:
struct
{ int data;
  struct x *next,*prev;
};
typedef struct x node;
node *root=NULL;

//Delete a node from the end of a DLL:
func()
{ node *k=root; //for traversal
  for(t=root;t->next!=NULL;t=t->next);
  { node *k=t; //for deallocating node
    t->prev->next=NULL;
    free(k);
  }
}
