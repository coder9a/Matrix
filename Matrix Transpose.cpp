#include<stdio.h>
int main()
{
	int i,j,r,s,a[10][10],b[10][10];
	printf("Enter rows & columns of the matrix \n");
	scanf("%d %d",&r,&s);
		printf("Enter matrix elements\n");
	    for(i=0;i<r;i++)
	    {
	     	for(j=0;j<s;j++)
		    {
		    	scanf("%d",&a[i][j]);
		    }
	    }
	    printf("Initially Matrix is\n");
	    for(i=0;i<r;i++)
	    {
	     	for(j=0;j<s;j++)
		    {
		    	printf("%d ",a[i][j]);
		    }
		    printf("\n");
	    }
	    // Transpose code
	    printf("Transpose of matrix is\n");
	    for(i=0;i<r;i++)
	    {
	    	for(j=0;j<s;j++)
	    	{
	    		b[j][i] = a[i][j];
			}
			printf("\n");
		}
		printf("Transpose of matrix is\n");
	    for(i=0;i<r;i++)
	    {
	    	for(j=0;j<s;j++)
	    	{
	    		printf("%d ",b[i][j]);
			}
			printf("\n");
		}
}
