//Structure:
{ int data;
  struct x*next;
};
typedef struct x node;
node *root=NULL;

//Function to add a node at any position (given as input) in a SLL:
func()
{ node *N; 
  int pos,n,i;
  printf("Enter element and position \n");
  scanf("%d%d",&n,&pos);
  if(pos==1)
  { add_beg(); //Function that adds a node at the beginning->AddHead_SLL.
  }
  else
  { N=(node*)malloc(sizeof(node));
    N->data=n;
    node *t=root;
    for(i=2;i<=pos-1;i++)
    { t=t->next;
    }   
    //N will be inserted in between t(left) and t->next(right)
    N->next=t->next; //link N->next to t->next (right of N)
    t->next=N; //link t->next(left of N) to N.
   }
}
