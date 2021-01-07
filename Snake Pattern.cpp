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
	    printf("Snake Pattern of matrix is\n");
	    for(i=0;i<r;i++)
	    {
	    	if(i%2 == 0)
	    		{
	    			// Print from left to right
	    			for(j=0;j<s;j++)
	    			{
	    				printf("%d ",a[i][j]);
					}
				}
				else
				{
					// Print from right to left
					for(j=s-1;j>=0;j--)
	    			{
	    				printf("%d ",a[i][j]);
					}
				}
		}
}
