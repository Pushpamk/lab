#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int mat[20][20], stack[20], n, pos[20], count=0;

void dfs(int v)
{   int u;
    stack[++count]=v;
    u=adjacent(v);
    
    while(u)
    {  if(checkreach(u)==0)
         dfs(u);
         
         u = adjacent(v);
         
      }
      
   }
   
   int adjacent(int i)
   {  int j;
     for(j=pos[i]+1;j<=n;j++)
      if(mat[i][j]==1)
         {
            pos[i]=j;
            return j;
          }
       pos[i]=n+1;
       return 0;
       }
       
       int checkreach(int u)
       { int i;
         for(i=1;i<=count;i++)
         if(stack[i]==u)
            return 1;
         return 0;
         
        }   




 void main()
  {  int i,j,src;
     clock_t end, start;
     double diff; 
      
    printf("\n Enter the number of vertices:");
     scanf("%d", &n);
     
     printf("\n Enter the adjacency matrix:\n");
     for(i=0;i<n;i++)
       for(j=0;j<n;j++)
         {  scanf("%d",&mat[i][j]);
         }
         
     printf("\n The adjacency matrix:\n");
     for(i=0;i<n;i++)
      { for(j=0;j<n;j++)
         {  printf("%d ",mat[i][j]);
         }
         printf("\n");
       }  
      printf("\nEnter source:");
      scanf("%d",&src);
      
      start=clock();
      dfs(src);
      end=clock();
      
      for(i=1;i<=count;i++)
        printf("\n %d", stack[i]+1);
      
      diff=(double)(end-start)/CLOCKS_PER_SEC;
      
     printf("\n Time taken is %lf\n",diff);
     }
      
