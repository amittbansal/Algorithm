#include <stdio.h>
#define max 20

void knapsackdp(int,int);
int max(int,int);
void backtracking();
int weight[max],value[max],w,no,*x;
int v[max][max];

int main()
{
 	int i,j;
 	
printf("\n enter number of object you want:");
 	scanf("%d",&no);

 	printf("\n enter weight and values in ascending order of vales");;
 
for(i=1;i<=no;i++)
{
  		printf("\n enter weight and value for object %d:",i);
  		scanf("%d %d",&weight[i],&value[i]);
 	}
 
printf("\n enter knapsack capacity:");
 	scanf("%d",&w);
 
knapsackdp(no,w);
 	backtracking();
}

 void knapsackdp(int no,int w)
{
 	int i,j;
 	
for(i=0;i<= w ;i++)
	{  	
		v[0][i]=0;
	}
 
for(i=0;i<= no;i++)
  	{
v[i][0]=0;
	}
 

for(i=1;i<= no;i++)
 	{
  		for(j=1;j<= w;j++)
  		{
   			if((j-weight[i])< 0)
{    			
				v[i][j]=v[i-1][j];
}
   			Else
{
    				v[i][j]=max(v[i-1][j],v[i-1][j-weight[i]]+value[i]);
  			}
 		}
 		printf("\n \t ");
	}
 
for(i=0;i<= w;i++)
 	{
 		printf("%2d  ",i);
  		printf("\n-----------------------------------------------------------------------------");
  		for(i=0;i<=no;i++)
 		{
  			printf("\n w%d=%2d v%d=%2d |",i,weight[i],i,value[i]);
  			for(j=0;j<= w;j++)
   			{
				printf("%2d  ",v[i][j]);
  			}
}
  		printf("\n maximum value carry by knapsack is:%2d",v[no][w]);
 		printf("\n-----------------------------------------------------------------------------");
}
}
 	
int max(int a,int b)
{
 	return (a >b)?a:b;
}


 void backtracking()
{
 	 int j1,i;
 j1=w;
 
printf("\nincluded object \t weight \t value");
 	printf("\n-----------------------------------------------------------------------------");
 	
for(i=no;i >=0;i--)
 	{
   		if(v[i][j1]!=v[i-1][j1] && (v[i][j1]==v[i-1][j1-weight[i]]+value[i]))
  		{
   			printf("\n%2d \t\t\t  %2d   \t\t %2d",i,weight[i],value[i]);
   			j1=j1-weight[i];
  		}
	}
}

