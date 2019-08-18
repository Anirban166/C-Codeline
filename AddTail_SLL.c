//Structure:
{ int data;
  struct x*next;
};
typedef struct x node;
node *root=NULL;

//Function to add a node at the end of a SLL:
func()
{ node *N,*t; int n;
  N=(node*)malloc(sizeof(node));
  scanf("%d",&n);
  N->data=n;
  for(t=root;t->next!=NULL;t=t->next);
  N->next=NULL;
  t->next=N;
}
