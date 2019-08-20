//Structure:
struct
{ int data;
  struct x *next,*prev;
};
typedef struct x node;
node *root=NULL;

//Delete a node from the beginning (head) of a DLL:
func()
{ int pos,c=0;
  printf("Enter position to delete node from\n");
  scanf("%d",&pos);
  if(pos==1)
  { node*k=root;
    root=root->next;
    root->prev=NULL;
    free(k);
  }
  else 
  { node *t;
    for(t=root;t!=NULL;t=t->next)
    { c++;
      if(c==pos-1)
      { node *k=t->next;
        t->next=t->next->next;
        t->next->prev=t;
        free(k);
      }
    }
  }
}
