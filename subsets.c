#include<stdio.h>

int count, w[10],d,x[10];

void subset(int cs, int k, int r)
{ int i;
  x[k]=1;
  
  if((cs+w[k])==d)
  {  printf("\n Subset solution = %d ----->",++count);
  
  for(i=0;i<=k;i++)
   { if(x[i]==1)
      printf(" \t %d ",w[i]);
      }
      
   }
   
   else if(cs+w[k]+w[k+1]<=d)
    subset(cs+w[k],k+1,r-w[k]);
    
    
  if((cs+r-w[k]>=d)&&(cs+w[k+1])<=d)
  {  x[k]=0;
    subset(cs,k+1,r-w[k]);
    }
    
  }
  
  
  
  int main(){
  
    int sum=0,i,n;
    
    printf("\n Enter no. of elements:");
    scanf("%d",&n);
    
    printf("\n Enter the elements in ascending order:\n");
    
    for(i=0;i<n;i++)
    scanf("%d",&w[i]);
    
    printf("\n Enter the required sum:");
    scanf("%d",&d);
    
    for(i=0;i<n;i++)
      sum=sum+w[i];
      
      if(sum<d)
      {  printf("\n No solution exists. \n");
      }
      
      
      
      printf("\n The solution is\n");
      count=0;
      subset(0,0,sum);
      printf("\n");
      }
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
    
       
