	#include<stdio.h>
	#include <stdlib.h>
	void printfunc (int *arr,int n);
	int main()
{
	int i,n;
	int *arr;
	
	arr =(int *) malloc(n*sizeof(int));
	printf("Enter the n value:");
	scanf("%d",&n);
	
	printf("Enter the number :");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printfunc(arr,n);
}
	void printfunc (int *arr,int n)
	{
	
	int sum=0,i;
	for (i=0;i<n;i++)
    {
        sum += arr[i];
    }
        printf("\nsum :%d",sum);
	}