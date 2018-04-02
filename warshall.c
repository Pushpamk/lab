#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int p[100][100];

int Warshall(int n)
{ 
    
  int i,j,k;
  
  for(k=0;k<n;k++)
   for(i=0;i<n;i++
     for(j=0;j<n;j++)
        p[i][j]=p[i][j]||(p[i][k]&&p[k][j]);
        
        
  }
  
 void main(){
 
  int n,i,j;
  clock_t end, start;
 double diff;
  printf("\n Enter the order of the matrix:");
  scanf("%d",&n);
  
  printf("\n Enter the matrix for the diagraph:\n");
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&p[i][j]);
      
      
      
   printf("\n The matrix:\n");
    for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
      { printf("  %d",p[i][j]);  
     } 
      printf("\n");
      }
      
     start=clock(); 
     Warshall(n);
     end=clock();
     
     
      printf("\n The transitive matrix:\n");
    for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
      { printf("  %d",p[i][j]);  
     } 
      printf("\n");
      } 
      
     diff=(double)(end-start)/CLOCKS_PER_SEC;
     printf("\n Run Time: %lf\n", diff); 
      
      
    }
      
      
      
      
      
      
      
      
      
      
      
      
      
      
       
  
  
  
  
  
  
  
  
  
  
        
  
