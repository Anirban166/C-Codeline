//Only for sorted array
//Time complexity reduced by half as compared to linear search

#include<stdio.h>   
int main()
{ int n,a[10],mid,i,beg,end;
  print("Enter no. of elements\n");
  scanf("%d",&n);
  printf("Enter elements");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("Enter element to be searched\n");
  scanf("%d",&n);
  beg=0;
  end=n-1;
  mid=(beg+end)/2;
  while(beg<=end)
 { if(a[mid]<x)
   beg=mid+1;
   else if(a[mid]==x)
  { printf("Element found at %d position\n",mid+1);
    break;
  }
  else end=mid-1;
  //again get mid
  mid=(beg+end)/2;
 }
 return 0;
}

 
