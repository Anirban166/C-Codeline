//Structure:
struct x
{ int data;
  struct x*next;
}; typedef struct x node;
node *top=NULL;

//Push function:
push() 
{ int n;
  node *N;
  N=(node*)malloc(sizeof(node));
  printf("Enter node data\n");
  scanf("%d",&n);
  N->data=n;
  N->next=NULL;
  if(top==NULL)
  { top=N; }
  else
  { N->next=top; top=N;
  }
}

//Pop function:
pop()
{ if(top=NULL)
   printf("Empty Stack");
   else
   { node *t=top;
     top=top->next;
     free(t);
   }
}

//Display function:
func()
{ if(top=NULL)
  printf("Empty Stack");
  else
  { node *t;
    for(t=top;t!=NULL;t=t->next)
    printf("%d->",t->data);
    printf("NULL");
  }
}

