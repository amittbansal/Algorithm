#include<stdio.h>

int main()
{
int i,j,s,temp,a[20];
 	
printf("enter total elements upto 20: ");
 	scanf("%d",&s);
 	
printf("enter %d elements: ",s);
 	for(i=0;i<s;i++)    
 	{
scanf("%d",&a[i]);           // store input from user into array
 	}

for(i=1;i<s;i++)
{
      		temp=a[i];
      		j=i-1;
      		
while((temp<a[j])&&(j>=0))
{
      			a[j+1]=a[j];
          			j=j-1;
      		}
      		
a[j+1]=temp;
  	}

printf("after sorting: ");
  	
	for(i=0;i<s;i++)
{
      		printf(" %d",a[i]);
	}
 	return 0;
}

