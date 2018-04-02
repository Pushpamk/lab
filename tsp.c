#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int a[20][20],n, visited[10],cost=0;
void mincost(int);
int least(int);
//int home;


void main(){
 
  
  clock_t start, end;
  double diff; 
  
  printf("\n===============================Cox & Kings===============================================\n");
  
  printf("\n Enter number of cities:");
  scanf("%d",&n);
  
  int i,j;
  
  printf("\n Enter cost matrix:");
  for(i=0;i<n;i++)
  { // printf("\nRow %d:",i+1);
     for(j=0;j<n;j++)
      if(i==j)
       a[i][j]=0;
       else a[i][j]=a[j][i]=rand()%100;
     visited[i]=0;
    }
     
    printf("\nCost matrix:\n");
    for(i=0;i<n;i++)
      {for(j=0;j<n;j++)
       { printf("%d\t",a[i][j]);
       }
      printf("\n");
   }
   /*printf("\nEnter home city:(1\t");
   for(i=1;i<n;i++)
    printf("or\t%d\t",i+1);
    
    printf("):");
    
    
    
    scanf("%d",&home); 
    
    home-=1;*/
    
   start=clock();
   mincost(0);
   end=clock();
   printf("\n The minimum cost of travel is %d\n",cost);
   
   diff=(double)(end-start)/CLOCKS_PER_SEC;
 	printf("\nStart Time = %ld \nEnd Time = %ld\n",start, end);
 	printf("\n Time taken to complete the process is %lf seconds\n",diff);
   }
   
   void mincost(int city)
   {    int next;
   
   	   visited[city]=1;
        printf("%d-->",city+1);
        next=least(city);
        
        if(next==999)
        { next = 0;
         printf("%d",next+1);
         cost=cost+a[city][next];
         return;
         }
        
        mincost(next);
        
     }
     
     
     int least(int city)
     {  int i,m=999,j,c=city,min=999;
          
        
		  for(i=0;i<n;i++)
		    {  if(a[c][i]!=0&&visited[i]==0)
		         { if(a[c][i]<min)
		          {   min=a[c][i];
		             //cost=cost+a[c][i];
		            m=i;
		            
		          }
		           
		      }
		     }
		     
		     if(min!=999)
		     cost=cost+min;
		      
		      
	 return m;
	 
	 }
	 
	 
	  
		      
		          
		          
		           
     
     
     
        
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
