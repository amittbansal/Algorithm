#include<stdio.h>
#define max 50

void mergesort(int arr[],int low,int mid,int high);
void partition(int arr[],int low,int high);

int main()
{
 	int merge[max],i,n;
 	
printf("enter the total number of elements: ");
    	scanf("%d",&n);

    	printf("enter the elements which to be sort: ");
    	for(i=0;i<n;i++)
{
         		scanf("%d",&merge[i]);
    	}

    	partition(merge,0,n-1);
    	printf("after merge sorting elements are: ");

    	for(i=0;i<n;i++)
{
         		printf("%d ",merge[i]);
    	}

   	return 0;
}

void partition(int arr[],int low,int high)
{
 	int mid;
if(low<high)
{
         		mid=(low+high)/2;
         		partition(arr,low,mid);
         		partition(arr,mid+1,high);
         		mergesort(arr,low,mid,high);
    	}
}





void mergesort(int arr[],int low,int mid,int high)
{
   	int i,m,k,l,temp[max];
    	l=low;
    	i=low;
    	m=mid+1;
    	while((l<=mid)&&(m<=high))
{
if(arr[l]<=arr[m])
{
             		temp[i]=arr[l];
             		l++;
         		}
         		
else
{
             		temp[i]=arr[m];
             		m++;
         		}
         I		++;
    	}

    	if(l>mid)
{
         		for(k=m;k<=high;k++)
{
             		temp[i]=arr[k];
             		i++;
         		}
    	}
    	else
{
         		for(k=l;k<=mid;k++)
{
             		temp[i]=arr[k];
             		i++;
         		}
    	}
   
    	for(k=low;k<=high;k++)
{
         		arr[k]=temp[k];
    	}
}

