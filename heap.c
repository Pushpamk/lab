#include<stdio.h>
#include<time.h>

struct emp{ int id;
            int rank;
            };
            
void heapify(struct emp arr[], int n, int i)
{ int largest=i;
  struct emp temp;
  
  
  
  int l=2*i+1;
  int r=2*i+2;
  
  if(l<n&&arr[l].rank>arr[largest].rank)
  largest=l;
  
  if(r<n&&arr[r].rank>arr[largest].rank)
  largest=r;
              
  if(largest!=i)
  {  temp = arr[i];
    arr [i]=arr[largest];
    arr[largest]=temp;
    
    heapify(arr,n,largest);
    }
  }
  
  
 void heapSort(struct emp arr[],int n)
 
 { int i;
   struct emp temp;
   
   for(i=n/2-1;i>=0;i--)
   heapify(arr,n,i);
   
   for(i=n-1;i>=0;i--)
   { temp=arr[0];
     arr[0]=arr[i];
    arr[i]=temp;
     
     
     heapify(arr,i,0);
     }
     
  }
  
  
  
void main(){ 

 struct emp arr[1000]; int n , i;
 
    clock_t start, end;
    double diff;
 
 printf("\n Enter the number of employees:");
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 { arr[i].id=rand()%1000;
   arr[i].rank=rand()%1000;
   }
   
   
  printf("\nUnsorted Employeee Details:");
  for(i=0;i<n;i++)
  { printf("\n\n Emp ID:%d \n Rank : %d",arr[i].id,arr[i].rank);
  }
  
  
  start=clock();
  heapSort(arr,n);
    end=clock();
  
  
  printf("\nSorted Employeee Details:");
  for(i=0;i<n;i++)
  { printf("\n\n Emp ID:%d \n Rank : %d",arr[i].id,arr[i].rank);
  }
  
  
  diff=(double)(end-start)/CLOCKS_PER_SEC;
      
      printf("\nTime Taken : %lf",diff);
  
  printf("\n");
  
  }
  
  
  
  
  
  
  
  
   
   
   
   
   
   
 
 
 
 
 
 
 
 
   
  
  
  
  
  
     
     
     
   
   
   
   
   
   
   
   
    
  
  
  
            
