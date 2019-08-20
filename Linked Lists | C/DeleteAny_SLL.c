//Structure:
{ int data;
  struct x*next;
};
typedef struct x node;
node *root=NULL;

//Function to delete a node from any position (given as input) from a SLL:
func()
{ node *t,*temp;
  int count=0,n;
  scanf("%d",&n);
  //No body for loop with break status true when condition not satisfied.
  for(t=root;(count++!)=n && t->next!=NULL;t=t->next);
  temp=t->next;
  t->next=t->next->next;
  free(temp);
}
 
