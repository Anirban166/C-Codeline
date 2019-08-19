//Structure:
{ int data;
  struct x*next;
};
typedef struct x node;
node *root=NULL;

//Iterative Function to display elements:
func()
{ 
  if(root==NULL)
  printf("Link list is empty");
  else
  { node *t=root;
    while(t!=NULL)
    { printf("%d->",t->data);
      t=t->next;
    } printf("NULL"); //at the end of the list. Eg display: "3->4->NULL"
  }
    //OR use for loop:
    //for(t=root;t!=NULL;t=t->next)
    //printf("%d->",t->data);
    //printf("NULL");
}

//Recursive function to display the elements of a SLL:
func(node *t)
{ if(root!=NULL) //if(root)
  { printf("%d->",t->data);
    func(t->next);
  }
} 

//Recursive function to display the elements in reverse order of a SLL:
func(node *t)
{ if(root!=NULL) //if(root)
  { func(t->next);
    printf("%d->",t->data);
  }
} 
 


