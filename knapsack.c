//knapsack problem 

#include<stdio.h>
#include<time.h>

int v[20][20], m_wt;

int max(int a, int b)
{ return (a>b)?a:b;
}

/*int max_wt(int w[],int m)
{  int largest=w[0];
   int i;
   for(i=0;i<m;i++)
     if(w[i]>largest)
       largest=w[i];
       
    return largest;
    }
*/
   

void knapsack(int m, int w[], int p[],int limit)
{ 
   int i,j;
   
   
   
 
   
   for(i=0;i<=m;i++)
    for(j=0;j<=limit;j++)
    {    v[i][0]=0;
         v[0][j]=0;
       if(j-w[i]<0)
             v[i][j]=v[i-1][j];   
    else if(j-w[i]>=0) { v[i][j]= max(v[i-1][j], v[i-1][j-w[i]]+p[i]);
         }

}

}

void main(){
 int m,n,i,j,op;
 
  printf("\n Enter the number of items:");
  scanf("%d",&m);
  
  int weight, cost;
  int item[10],w[10],p[10];


  printf("\n Enter the weight and profit of knapsack:");
  for(i=0;i<m;i++)
  { printf("\n Item %d:",i+1);
    scanf("%d %d",&w[i],&p[i]);
    //item[i]=i;
    }
    
    int limit;
    
    printf("\n Enter the limit:");
    scanf("%d",&limit);
    
     
    knapsack(m,w,p,limit);
    
    
    
   printf("\n The matrix:\n");
    for(i=0;i<=m;i++)
     { for(j=0;j<=limit;j++)
       { printf(" %d ", v[i][j]);
      }
      printf("\n");
      }  
      
   op=v[m][limit];
   
   printf("\n The optimal solution is: %d\n" ,op);
   }
   
   
   
   
       
      
      
      
      
      
      
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  
   
 







  
   
 
 
 
