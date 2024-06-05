#include<stdio.h>

int main()
{
	int num,sum=0,i;
	//printf("Enter the nuber:");
	scanf("%d",&num);
		for(i=0;i<=num;i++)
		{
			sum+=i;
		}
		printf("sum = %d\n",sum);
		int avg=sum/num;
		printf("avg = %d",avg);
		return 0;
		
}				