//Structure:
{ int data;
  struct x*next;
};
typedef struct x node;
node *root=NULL;

//Function to delete a node from the end of a SLL:
func()
{ node *t,*temp;
  for(t=root;t->next->next!=NULL;t=t->next);
  //gonna delete/deallocate node pointed by t->next
  temp=t->next;
  t->next=NULL;
  free(temp);
}
