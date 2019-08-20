//Structure:
struct
{ int data;
  struct x *next,*prev;
};
typedef struct x node;
node *root=NULL;

//Add a node at any (given position) of a DLL:
func()
{ int n,pos,c=0; 
  node *N;
  N=(node*)malloc(sizeof(node));
  scanf("%d",&n);
  N->data=n;
  printf("Enter position to insert a node\n");
  scanf("%d",&pos);
  if(pos==1)
  { N->next=root;
    root->prev=NULL;
    N->prev=NULL;
    root=N;
  }
  else
  { node *t;
    for(t=root;t!=NULL;t=t->next)
    { c++;
      if(c==pos-1)
      { N->next=t->next;
        t->next->prev=N;
        t->next=N;
        N->prev=t;
      }
    }
  }
}
