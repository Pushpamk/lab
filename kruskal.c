
#include<stdio.h>
#include<time.h>


struct edges{
   int u,v,cost;
   };
   
   
   typedef struct edges edge;
   
   int find(int  v, int parent[])
   { while(parent[v]!=v)
     { v=parent[v];
     }
     
     return v;
     
    }
    
   void uni( int i, int j, int parent[])
   { if(i<j)
    parent[j]=i;
    else parent[i]=j;
    }
    
    
    
    void kruskal(int n, edge e[], int m)
    {  int count, k, i, sum, u, v, j, t[10][10],p,parent[10];
    
    edge temp;
    count=0;
    k=0;
    sum=0;
    
    for(i=0;i<m;i++)
    { for(j=0;i<m-1;j++)
     { 
      if(e[j].cost>e[j+1].cost)
      {
         temp.u=e[j].u;
     	 temp.v=e[j].v;
     	 temp.cost=e[j].cost;
     	 e[j].u=e[j+1].u;
     	 e[j].v=e[j+1].v;
     	 e[j].cost=e[j+1].cost;
     	 e[j+1].u=temp.u;
     	 e[j+1].cost=temp.cost;
     	 }
      }
       
     }
     
     
     
    for(i=0;i<n;i++)
     parent[i]=i;
     
     p=0;
     
     
    while(count!=n-1)
    { u=e[p].u;
      v=e[p].v;
      
      i=find(u,parent);
      j=find(v,parent);
      
      if(i!=1)
      { t[k][0]=u;
        t[k][1]=v;
        
        k++;
        
        count++;
        
        sum=sum+e[p].cost;
        
        uni(i,j,parent);
        
        }
        
       p++;
       
     }
     
     if(count==n-1)
     {  printf("\n Spanning Tree exists and is :\n");
        for(i=0;i<n-1;i++)
        { printf(" %d %d ",t[i][0],t[i][1]);
        }
        
        printf("\n The cost of the spanning tree is: %d\n",sum);
      }  
    else printf("\n Spanning tree does not exist\n");
    }
    
    
    
    
              
  int main(){
  
   int n,m,u,b,i,cost;
   
   edge e[200];
   
   double diff;
   
   clock_t start,end;
   
   printf("\n Enter the number of vertices:");
   scanf("%d",&n);
   
   printf("\n Enter the number of edges:");
   scanf("%d",&m);
    
     printf("\n Enter the edge list(u,v) :");
     for(i=0;i<m;i++)
      scanf("%d %d %d",&e[i].u,&e[i].v,&e[i].cost);
        
    
        
        start=clock();
        printf("ss");
        kruskal(n,e,m);
        printf("last");
        end=clock();
        
        diff =(double)(end-start)/CLOCKS_PER_SEC;
        
        printf("\n Run Time: %lf \n\n",diff);
        
        
        }       
        
        
         
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
      
     
     
     
     
     
     
     
     
      
      
      
      
      
      
      
      
      
      
      
      
      
    
    
    
    
    
    
    
    
    
    
    
    
      
