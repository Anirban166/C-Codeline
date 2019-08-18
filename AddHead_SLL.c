//Structure:
{ int data;
  struct x*next;
};
typedef struct x node;
node *root=NULL;

//Function to add a node at the beginning of a SLL:
func()
{ node* N; int n;
  N=(node*)malloc(sizeof(node));
  scanf("%d",&n);
  N->data=n;
  N->next=root;
  root=N;
}
