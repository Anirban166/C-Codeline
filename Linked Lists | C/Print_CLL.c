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
           
