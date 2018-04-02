#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){

 	long int i,n;
 	clock_t start,end;
 	double diff;
 	
 	printf("\n Enter the number of books:");
 	scanf("%ld",&n);
		
	long int a[n];	
 	
 	for(i=0;i<n;i++)
 	{ a[i]=rand()%1000000;
 	}
 	
 	printf("\nThe unsorted ISBN list is:");
 	for(i=0;i<n;i++)
 	{ printf("\t%ld",a[i]);
 	}
 	
 	long int temp,j;
 	
 	start= clock();
 	for(i=1;i<n;i++)
 	{ for(j=0;j<(n-i);j++)
 	   { if(a[j]>a[j+1])
 	     { temp = a[j];
 	       a[j]=a[j+1];
 	       a[j+1]=temp; 
 	      }
 	    }
 	  }
 	  
 	 end = clock();
 	  
 	 
 	printf("\nThe sorted ISBN list is:");
 	for(i=0;i<n;i++)
 	{ printf("\t%ld",a[i]);
 	}
 	
 	printf("\n");
 	
 	diff=(double)(end-start)/CLOCKS_PER_SEC;
 	printf("\nStart Time = %ld \n End Time = %ld\n",start, end);
 	printf("\n Time taken to complete the process is %.7lf seconds\n",diff);
 	}
 	
 	
 	
 	
 	
 	
 	
 	
 	
 
