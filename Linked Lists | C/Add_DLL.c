//Structure:
struct
{ int data;
  struct x *next,*prev;
};
typedef struct x node;
node *root=NULL;

//Add a node to a DLL:
func()
{ int n; 
  node *N;
  N=(node*)malloc(sizeof(node))l
  scanf("%d",&n);
  N->data=n;
  N->next=NULL;
  if(root==NULL)
  { root=N;
    N->prev=NULL;
  }
  else
  { node*t;
   for(t=root;t->next!=NULL;t=t->next);
  { t->next=N;
    N->prev=t;
    N->next=NULL;
  }
  }
}
