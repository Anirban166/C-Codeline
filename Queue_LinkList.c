//Queue using Linked List:

#include<stdio.h>
#include<stdlib.h>

struct x
{ int data;
  struct x*next;
}; typedef struct x node;
node *front=NULL,*rear=NULL;

//create function
func()
{ int n;
  node *N;
  N=(node*)malloc(sizeof(node));
  printf("Enter node data\n");
  scanf("%d",&n); 
  N->data=n;
  N->next=NULL;
  if(front==NULL)
  { front=N; rear=N;
  }
  else 
  { rear->next=N;
    rear=N;
  }
}

//delete function:
func()
{ if(front==NULL)
  printf("Empty\n");
  else  
  { node *t;   
    t=front;
    front=front->next;
    free(t);
  }
}

//display function:
func()
{ node *t;
  if(front==NULL)
  printf("Empty\n");
  else
  { for(t=front;t!=NULL;t=t->next)
    { printf("%d",t->data);
    }
    printf("NULL");
  }
}
