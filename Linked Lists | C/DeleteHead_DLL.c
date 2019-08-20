//Structure:
struct
{ int data;
  struct x *next,*prev;
};
typedef struct x node;
node *root=NULL;

//Delete a node from the beginning (head) of a DLL:
func()
{ node *k=root;
  root=root->next;
  root->prev=NULL;
  free{k);
}
