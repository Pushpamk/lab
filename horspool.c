#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int t[1000];

void shiftTable(char p[])
{  int m= strlen(p);
    
   int i,j;
   
   for(i=0;i<1000;i++)
   t[i]=m;
   
   for(j=0;j<m-1;j++)
   t[p[j]]=m-1-j;
   
   }
   
   
 int hp(char s[],char p[])
 {   int n=strlen(s);
     int m=strlen(p);
     
     int i=m-1,k;
     
     
     
     while(i<n)
     { k=0;
       
       while((k<m)&&p[m-1-k]==s[i-k])
       k++;
       
       if(k==m)
        return (i-m+1);
       else i=i+t[s[i]];
       
    }
    
    return -1;
  }
  
void main(){

 char s[100],p[50];
 int index;
 
 clock_t end, start;
 double diff;
 
  printf("\n Enter the string:");
  scanf("%s",s);
  
  printf("\n Enter the pattern:");
  scanf("%s", p);
  
  start=clock();
  shiftTable(p);
  index=hp(s,p);
  end=clock();
  
  if(index>=0)
   printf("\n String: %s \n Pattern: %s \n Index: %d",s,p,index);
  else("\n String: %s \n Pattern: %s \n Pattern Not Found. \n",s,p);
  
  diff=(double)(end-start)/CLOCKS_PER_SEC;
  
  printf("\n Run Time: %lf\n",diff);
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
 
 
 
 
 
 
 
   
  
  
  
  
  
     
       
       
       
       
       
       
     
     
     
     
     
     
     
     
     
       
   
   
   
   
   
   
   
   
   
   
   
   
   
      
