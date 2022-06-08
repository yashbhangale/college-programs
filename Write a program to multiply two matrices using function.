#include<stdio.h>
void main()
{	
    int m,n,p,i,j,a[10][10],b[10][10];
	void MatMul (int a[10][10],int b[10][10], int m, int n, int p);
    printf("Enter the number of rows and columns of matrix 1:");
	scanf("%d %d",&m,&n);
	printf("Enter the values of matrix 1\n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("Enter a value:");
			scanf("%d",&a[i][j]);
		}
	}
	printf("The number of rows for matrix 2 will be %d\n",n);
	printf("Enter the columns of matrix 2:");
	scanf("%d",&p);
	printf("Enter the elements of matrix 2:\n");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=p-1;j++)
		{
			printf("Enter a value:");
			scanf("%d",&b[i][j]);
		}
	}
	    MatMul(a,b,m,n,p);
	}
        void MatMul (int a[10][10], int b[10][10], int m, int n, int p)
{
	int i,j,k,c[10][10];
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=p-1;j++)
		{
		       c[i][j]=0;
		       for(k=0;k<=n-1;k++)
		       {
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
		       }
		}
	}
	printf("The resultant matrix is:\n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=p-1;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
