//Structure:
{ int data;
  struct x*next;
};
typedef struct x node;
node *root=NULL;

//function to search for an element in a SLL:
func()
{ node *t=root;
  int c=0, x;
  while(t!=NULL)
 { if(t->data==x)
   count++;
   // printf("Found at %d position",c+1);
   t=t->next;
 }
 if(c!=0)
 printf("Element found. \n");
 else
 printf("Not found. \n");
}
 
