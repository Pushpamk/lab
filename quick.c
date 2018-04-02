#include<stdio.h>
#include<time.h>

void swap(int *a, int *b)
{ int t= *a;
     *a=*b;
     *b=t;
     }
     
int partition(int arr[],int low, int high)
{  int pivot=arr[high];
int i=(low-1);
int j;

   for(j=low;j<=high-1;j++)
   { if(arr[j]<=pivot)
    { i++;
    swap(&arr[i],&arr[j]);
    }
    }
    swap(&arr[i+1],&arr[high]);
    
    return(i+1);
    }
    
    void quickSort(int arr[],int low, int high)
    {
       if(low<=high)
      { int pi=partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
        }
        
     }
     
     
  void main(){
  
    int arr[1000], n, i;
    clock_t start, end;
    double diff;
    
    printf("\nn Enter the number of students:");
    scanf("%d",&n);
    
    
    
    for(i=0;i<n;i++)
      arr[i]=rand()%1000;
      
      
    printf("\n Unsorted USN Numbers:");
    for(i=0;i<n;i++)
      printf(" %d ", arr[i]);
      
      start=clock();
     quickSort(arr,0,n-1);
      end=clock();
     
     
     printf("\n Sorted USN Numbers:");
    for(i=0;i<n;i++)
      printf(" %d ", arr[i]); 
      
      diff=(double)(end-start)/CLOCKS_PER_SEC;
      
      printf("\nTime Taken : %lf",diff);
      
      
      
      printf("\n");
      
      
      
      
  }    
      
      
      
    
    
    
    
    
      
      
      
    
    
    
    
    
    
    
    
     
     
     
     
     
     
     
     
     
     
     
    
    
    
    
    
         
