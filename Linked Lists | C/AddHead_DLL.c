//Structure:
struct
{ int data;
  struct x *next,*prev;
};
typedef struct x node;
node *root=NULL;

//Add a node at the beginning of a DLL:
func()
{ int n; 
  node *N;
  N=(node*)malloc(sizeof(node))l
  scanf("%d",&n);
  N->data=n;
  N->next=root;
  root->prev=N;
  N->prev=NULL;
  root=n;
}
