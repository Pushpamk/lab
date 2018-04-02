#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){

 	long int key,i,n,flag=0;
 	clock_t start,end;
 	//float start1,end1;
 	double diff;
 	
 	printf("\n Enter the number of books:");
 	scanf("%ld",&n);
 	
 	long int a[n];
 	for(i=0;i<n;i++)
 	{ a[i]=rand()%1000000;
 	}
 	
 /*	printf("\nThe ISBN list of books are:");
 	for(i=0;i<n;i++)
 	{ printf("\t%ld",a[i]);
 	}
 	*/
 	long int temp,j;
 	
 	
 	for(i=1;i<n;i++)
 	{ for(j=0;j<(n-i);j++)
 	   { if(a[j]>a[j+1])
 	     { temp = a[j];
 	       a[j]=a[j+1];
 	       a[j+1]=temp; 
 	      }
 	    }
 	  }
 	 
 	printf("\nThe sorted list is:");
 	for(i=0;i<n;i++)
 	{ printf("\t%ld",a[i]);
 	}
 	
 	printf("\nEnter the key ISBN:");
 	scanf("%ld",&key);
 	
 	
 	long int low=0, high=n-1, mid;
 	
 	
 	start=clock();
 	while(low<=high)
 	{ mid=(low+high)/2;
 	   if(key==a[mid])
 	   { flag=1;
 	   end=clock();
 	     break;
 	    }
 	    
 	   else if(key<a[mid])
 	       high=mid-1;
 	   else low=mid+1;
 	   
 	   }
 	   
 	   
 	   
 	   
 	   if(flag==0)
 	{ end = clock();   
 	printf("Book with ISBN number %ld is not found!\n",key);
 	}
 	else printf("\nBook with ISBN number %ld is found in %ld location.\n",key,mid+1);
 	diff=(double)(end-start)/CLOCKS_PER_SEC;
 	printf("\nStart Time = %ld \nEnd Time = %ld\n",start, end);
 	printf("\n Time taken to complete the process is %lf seconds\n",diff);
 }
