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

//Recursive function to display the elements of a DLL:
func(node *t)
{ if(root!=NULL) //if(root)
  { printf("%d<->",t->data);
    func(t->next);
  }
} 

//Recursive function to display the elements in reverse order of a DLL:
func(node *t)
{ if(root!=NULL) //if(root)
  { func(t->next);
    printf("%d<->",t->data);
  }
} 
 
