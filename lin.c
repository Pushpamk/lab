#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void main(){

 	long int key,i,n,flag=0;
 	clock_t start,end;
 	float start1,end1;
 	double diff;
 	
 	printf("\n------------------------------------MEDCROSSS--------------------------------------------\n");
 	
 	printf("\n Enter the number of medicines:");
 	scanf("%ld",&n);
 	long int a[n];
 	
 	
 	start=clock();
 	for(i=0;i<n;i++)
 	{ a[i]=rand()%1000000;
 	}
 	
 	printf("\nThe medicines ID numbers  are:");
 	for(i=0;i<n;i++)
 	{ printf("\t%ld",a[i]);
 	}
 	
 	printf("\n");
 	
 	printf("\nEnter the key medicine ID number:");
 	scanf("%ld",&key);
 	
 	 	start=clock();
 	 	
 	for(i=0;i<n;i++)
 	{ if(key==a[i])
 	   { flag=1;
 	      end=clock();
 	      break;
 	      }
 	}
 	
 	//diff=(double)(end-start)/CLOCKS_PER_SEC;
 	
 	 if(flag==0)
 	{ end =clock();   
 	printf("Key element %ld is not found!\n",key);
 	}
 	else printf("\nKey element %ld is found in %ld location.\n",key,i+1);
 	diff=(double)(end-start)/CLOCKS_PER_SEC;
 	printf("\nStart Time = %ld \nEnd Time = %ld\n",start, end);
 	printf("\n Time taken to complete the process is %lf seconds\n",diff);
 	
 	}
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
