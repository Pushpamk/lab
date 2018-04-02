#include<stdio.h>
#include<time.h>

struct deloit{
  char name[20];
  int id;
  char address[20];
  };


struct deloit  a[30];

void merge(int l, int m, int r);

void mergeSort(int l, int r)
{  
  if(l<r)
   {int m=(l+r)/2;
   mergeSort(l,m);
   mergeSort(m+1,r);
   merge(l,m,r);
   }
   }
 void merge( int l, int m, int r)
 {  int i, j, k;
 
    int n1=m-l+1;
    int n2=r-m;
    
    struct deloit L[n1], R[n2];
    
    for(i=0;i<n1;i++)
      L[i]=a[l+i];
      
      for(j=0;j<n2;j++)
      R[j]=a[m+1+j];
      
      
    
    i=j=0;
    k=l;
    
    while(i<n1 && j<n2)
    { if(L[i].id<=R[j].id)
       { a[k]=L[i];
         i++;
         }
      else { a[k]=R[j];
            j++;
           }
           k++;
           
     }
     
     
     
     while(i<n1)
     { a[k]=L[i];
       i++;
       k++;
     }  
     
     while(j<n2)
     { a[k]=R[j];
       j++;
       k++;
     } 
      
}



void main()
{   int  i, n;
    clock_t start, end;
    double diff;

  printf("\n Enter the number of employees:");
  scanf("%d",&n);
  
  printf("\n Enter array (Name,Address,ID will be generated automatically):");
  for(i=0;i<n;i++)
  { scanf("%s",a[i].name);
   scanf("%s",a[i].address);
   a[i].id=rand()%100;
   }
  
  
  printf("\n Unsorted list:");
  for(i=0;i<n;i++)
  {printf("\nName: %s \n Address: %s \n ID: %d",a[i].name, a[i].address, a[i].id);
  }
  start = clock();
  mergeSort(0,n-1);
  end = clock();
  
  diff=(double)(end-start)/CLOCKS_PER_SEC;
  
   printf("\n Sorted lists:");
  for(i=0;i<n;i++)
  {printf("\nName: %s \n Address:%s \n ID:%d \n",a[i].name, a[i].address, a[i].id);
  }
  
  printf("\n Time taken %lf\n",diff);
  }
  
  
  
  
  
  
  








      
       
       
       
       
       
     
     
           
           
           
           
 
       
   

