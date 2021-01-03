#include<stdio.h>
int main()
{
	int i,j,r1,c1,r2,c2,a[r1][c1],b[r1][c1],c[r1][c1];
	printf("Enter rows of first matrix\n");
	scanf("%d",&r1);
	printf("Enter columns of first matrix\n");
	scanf("%d",&c1);
	printf("Enter rows of second matrix\n");
	scanf("%d",&r2);
	printf("Enter columns of second matrix\n");
	scanf("%d",&c2);
	if(r1!=r2 || c1!=c2)
	{
		printf("Matrix addition not possible");
	}
	else
	{
		printf("Enter first matrix elements\n");
	    for(i=0;i<r1;i++)
	    {
	     	for(j=0;j<c1;j++)
		    {
		    	scanf("%d ",&a[i][j]);
		    }
		    printf("\n");
	    }
	    printf("Enter second matrix elements\n");
	    for(i=0;i<r2;i++)
	    {
	     	for(j=0;j<c2;j++)
		    {
		    	scanf("%d ",&b[i][j]);
		    }
		    printf("\n");
	    }
	    printf("Summation of matrix is\n");
	    for(i=0;i<r1;i++)
	    {
	    	for(j=0;j<c1;j++)
	    	{
	    		c[i][j] = a[i][j] + b[i][j];
			}
			printf("\n");
		}
		printf("Summation of matrix is\n");
	    for(i=0;i<r1;i++)
	    {
	    	for(j=0;j<c1;j++)
	    	{
	    		printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
}


