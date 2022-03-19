#include<stdio.h>
int main()
{
	int a[10],n,i,j,key,temp,mid,first,last;
	printf("enter n value");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("display the elements before sorting\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	for (i=0;i<n-1;i++)
	 {
		for(j=0;j<n-1-i;j++)
               	{
                  	if(a[j]>a[j+1])
                  	{
         	   	temp=a[j];
         	   	a[j]=a[j+1];
         	   	a[j+1]=temp;
                 	}
               }
          }    
         printf("\nthe elements after the sorting");
         for(i=0;i<n;i++)
         { 
         printf("%d\t",a[i]);
         }
         printf("enter key element to be seached");
         scanf("%d",&key);
         first=0;
         last=n-1;
         while(first<=last)
         {
         	mid=(first+last)/2;
         	if(key==a[mid])
         		{
         		printf("the element %dis found at position %d/n",key,mid+1);
         		return(0);
         		}
         		else 
         		{
         			if (key<a[mid])
         			{
         			last=mid-1;
         			}
         			else
         			{
         			first=mid+1;
         			}
         		}
          }		
         	printf("the elements %d not found in array",key);
         	return (1);
      }
	
		
		
	

