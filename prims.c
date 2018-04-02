
#include<stdio.h>
#include<time.h>
#include<string.h>


int min(int a, int b)
{ return(a<b)?a:b;
}

 void prims(int n, int cost[10][10])
 {  int i,j,k,u,v,min,src;
 
   int sum,t[20][20],p[20],d[20],visited[10];
   min=999;
   src=0;
   
   for(i=0;i<n;i++)
     for(j=0;j<n;j++)
       if(cost[i][j]!=0&&cost[i][j]<=min)
        {  min=cost[i][j];
        src=i;
        }
        
        for(i=0;i<n;i++)
        { d[i]=cost[src][i];
           visited[i]=0;
           p[i]=src;
           }
           
        visited[src]=1;
        sum=0;
        k=0;
        
        for(i=1;i<n;i++)
        { min=999;
        u=-1;
        for(j=0;j<n;j++)
        { if(visited[j]==0)
            { if(d[j]<=min)
            { min=d[j];
            u=j;
            }
           }
        }
        
     t[k][0]=u; 
     t[k][1]=p[u];
     
     k++;
     
     sum=sum+cost[u][p[u]];
     visited[u]=1;
     
     for(v=0;v<n;v++)
     {  if(visited[v]==0&&cost[u][v]<d[v])
     { d[v]=cost[u][v];
     p[v]=u;
     }
     }
     }
     
     
    if(sum>=999)
     printf("\n Spanning tree does not exist");
     
     else{ printf("\n Spanning tree exists and minimum spanning tree is:\n");
          for(i=0;i<n-1;i++)
          printf("\n %d %d ",t[i][0],t[i][1]);
          }
       printf("\n The cost of the spanning tree is: %d\n",sum);
       
       
       
      }
      
      
  int main(){
  
   int cost[10][10],n,i,j;
   
   double diff;
   
   clock_t start,end;
   
   printf("\n Enter the number of vertices:");
   scanf("%d",&n);
    
     printf("\n Enter the cost adjacency matrix:");
     for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        scanf("%d", &cost[i][j]);
        
    
        
        start=clock();
        prims(n,cost);
        end=clock();
        
        diff =(double)(end-start)/CLOCKS_PER_SEC;
        
        printf("\n Run Time: %lf \n\n",diff);
        
        
        }
        
        
        
        
        
        
      
      
      
          
      
      
      
      
      
      
      
      
      
      
      
      
          
             
      
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
           
           
           
           
           
           
           
           
           
        
        
        
        
           
           
   
