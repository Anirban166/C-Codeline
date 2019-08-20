//Structure:
struct x
{ int data;
  struct x *next;
};
typedef struct x node;
node *root=NULL,*rear=NULL;

//Function to create a node in a CLL:
func()
{ node *N;
  N=(node*)malloc(sizeof(node));
  N->data=n;
  if(root==NULL)
  { root=N; 
    rear=N;
    rear->next=root;
  }
  else
  { rear->next=N;
    rear=N;
    rear->next=root;
  }
}
