//Structure:
struct
{ int data;
  struct x *next,*prev;
};
typedef struct x node;
node *root=NULL;

//Display elements of a DLL:
func()
{ node *t;
  //if list empty, return NULL. else:
  for(t=root;t!=NULL;t=t->next)
  { print("%d<->",t->data);
  }
  printf("NULL");
}
