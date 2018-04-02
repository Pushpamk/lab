#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int mat[20][20], s[20], n, q[20],  f, r;

void bfs(int src)
{  int i,t;

   for(i=0;i<n;i++)
   {  s[i]=0;
   }
   
   q[++r]=src;
   s[src]=1;
   
   while(f<=r)
   {  t=q[f++];
      for(i=0;i<n;i++)
      { if(mat[t][i]==1&&s[i]==0)
       {  q[++r]=i;
          printf("\n %d %d",t+1, i+1);
          s[i]=1;
         }
       }
    }
    
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
         { if(i==j)
            mat[i][j]=0;
            else mat[i][j]=mat[j][i]=rand()%2;
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
      bfs(src);
      end=clock();
      
      diff=(double)(end-start)/CLOCKS_PER_SEC;
      
     printf("\n Time taken is %lf\n",diff);
     }
      
         
         
    
    
    
    
    
    
    
    
    
    
    
    
    
    
      
