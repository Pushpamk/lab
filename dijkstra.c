//dijkstra's shortest path algorithm
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define M 20

void dijkstra( int G[M][M], int n, int startnode)
{ int cost[M][M],distance[M],pred[M];

  int visited[M],count,mindistance,nextnode,i,j;
  
  for(i=0;i<n;i++)
     for(j=0;j<n;j++)
        if(G[i][j]==0)
            cost[i][j]=999;
            else cost[i][j]=G[i][j];
            
            
    for(i=0;i<n;i++)
    { distance[i]=cost[startnode][i];
      pred[i]=startnode;
      visited[i]=0;
      }
      
     distance[startnode]=0;
     visited[startnode]=1;
     count=1;
     
     while(count<n-1){
     
         mindistance=999;
         for(i=0;i<n;i++)
         if(distance[i]<mindistance&&!visited[i])
         { mindistance=distance[i];
          nextnode=i;
          }
          
          
          
       visited[nextnode]=1;
       for(i=0;i<n;i++)
        if(!visited[i])
           if(mindistance + cost[nextnode][i]<distance[i])
           {  distance[i]=mindistance+cost[nextnode][i];
              pred[i]=nextnode;
           }
           count++;
           }
           
           
           
        for(i=0;i<n;i++)
           if(i!=startnode)
              { printf("\n Distance of %d = %d", i, distance[i]);
                printf("\n\nPath = %d",i);
                j=1;
                
                do{ 
                 j=pred[j];
                 printf(" <- %d",j);
                 }while(j!=startnode);
                 }
                
            }
            
            
            
            
    void main(){
    
       int G[M][M], i, j, n, u;
       clock_t end,start;
       double diff;
       
       printf("\b Enter the number of vertices:");
       scanf("%d",&n);
       
       for(i=0;i<n;i++)
         for(j=0;j<n;j++)
             if(i==j)
             G[i][j]=0;
             else G[i][j]=G[j][i]=rand()%10;
       
       
       printf("\n The adjacency matrix:\n");
       for(i=0;i<n;i++)
        { for(j=0;j<n;j++)
           { printf("%d\t",G[i][j]);
            }
            printf("\n");
          }  
       printf("\n Enter starting node:");
       scanf("%d",&u);
       
        start=clock();
        dijkstra(G,n,u);
        end=clock();
        
        
        diff=(double)(end-start)/CLOCKS_PER_SEC;
        printf("\n Run Time: %lf\n",diff);
        
        
        }
        
        
        
        
        
        
             
            
            
            
         
         
         
         
         
         
         
         
         
       
       
       
       
       
       
       
               
            
            
            
            
            
            
                 
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
              
          
          
          
          
           
      
      
      
      
      
              
            
