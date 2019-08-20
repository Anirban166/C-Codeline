//Structure:
struct x
{ int data;
  struct x *next;
};
typedef struct x node;
node *root=NULL,*rear=NULL;

//Function to display elements in the CLL:
func()
{ node *t=root->next;
  while(t!=root) //loop stops at root.
  { printf("%d"->"t->data);
    t=t->next;
  }
  printf("%d",t->data); //to print root->data.
}
           
//Recursive function to display the elements in a CLL:
func(node *t)
{ if(root!=NULL) //if(root)
  { printf("%d->",t->data);
    func(t->next);
  }
 // printf("%d",t->data); //to print root->data.
} 

//Recursive function to display the elements in reverse order in a CLL:
func(node *t)
{ if(root!=NULL) //if(root)
  { func(t->next);
    printf("%d->",t->data);
  } 
 //  printf("%d",t->data); //to print root->data.
} 
 
