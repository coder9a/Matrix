#include<stdio.h>
int main()
{
	int i,j,r,s,a[10][10],b[10][10];
	printf("Enter rows & columns of the matrix \n");
	scanf("%d %d",&r,&s);
		printf("Enter matrix elements\n");
	    for(i=0;i<r;i++)
	    {
	     	for(j=0;j<=i;j++)
		    {
		    	scanf("%d",&a[i][j]);
		    }
	    }
	    printf("Initially Matrix is\n");
	    for(i=0;i<r;i++)
	    {
	     	for(j=0;j<s;j++)
		    {
		    	if(j<=i)
		    	{
		    		printf("%d ",a[i][j]);
				}
				else
				{
					printf("0 ");
				}
		    }
		    printf("\n");
	    }
}
