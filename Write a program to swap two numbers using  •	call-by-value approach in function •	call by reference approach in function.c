#include<stdio.h>
void main()
{
	int a,b;
	void swap (int a, int b);
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("The values of a and b in the main function before calling the swap function are %d and %d\n", a, b);
	swap(a,b);
	printf("The values of a and b in main function after calling the swap function are %d and %d\n", a, b);
}
void swap (int a, int b)
{
	int temp;
	temp =a;
	a=b;
	b=temp;
	printf("The values of a and b in the swap function after swapping are %d and %d\n",a,b);
}

