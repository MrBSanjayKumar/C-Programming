#include<stdio.h>
#include <stdlib.h>

char func(char order,int bill)
{
		
		if ( order=='1')
		{
		    printf("You bill is:20\n");
		    printf("Pay the bill:\n");
		    scanf("%d",&bill);
		    sleep(2);
		    printf("Thankyou for order...\n");
			printf("Your order deliver soon\n");
			sleep(5);
			printf("TEA is delived \nWelcome..!\n");
			sleep(5);
	    }
		else if(order=='2')
		{
		    printf("You bill is:25\n");
		    printf("Pay the bill:\n");
		    scanf("%d",&bill);
		    sleep(2);
		    printf("Thankyou for order...\n");
			printf("Your order deliver soon\n");
			sleep(5);
			printf("COFFEE is delived \nWelcome..!\n");	
			sleep(5);
		}
		else if(order=='3')
		{
			printf("You bill is:35\n");
			printf("Pay the bill:\n");
		    scanf("%d",&bill);
		    sleep(2);
		    printf("Thankyou for order...\n");
			printf("Your order deliver soon\n");
			sleep(5);
			printf("GREENTEA is delived \nWelcome..!\n");
			sleep(5);	
		}
		else if (order=='4')
		{
		    printf("You bill is:20\n");
		    printf("Pay the bill:\n");
		    scanf("%d",&bill);
		    sleep(2);
		    printf("Thankyou for order...\n");
			printf("Your order deliver soon\n");
			sleep(5);
			printf("MILK is delived \nWelcome..!\n");
			sleep(5);	
		}
    }
int main()
{
	int n,i;
	struct counter
	{
		char name[n];
		int age;
	};
	printf("Enter the how many customer:");
	scanf("%d",&n);
	
	struct counter* customer;
	
	customer=(struct counter*) malloc(n*sizeof(struct counter));
	
	char order[n];
	int bill;
	for (i=0;i<n;++i)
	{
		printf("\nEnter the name and age of the custome %d :",i+1);
		scanf("%s %d",&(customer+i)->name,&(customer+i)->age);
		printf("Enter the order :\n");
		printf("Tea-1,Coffee-2,GreenTea-3,Milk-4:");
		scanf(" %c",&order[i]);
		func(order[i],bill);
	}
	printf("The total order is :%d\n",n);
	for (i=0;i<n;++i)
	{
		printf("name %d: %s \n",i+1,(customer+i)->name);
	}
	free(customer);
    return 0;
}
		

