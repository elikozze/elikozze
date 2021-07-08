#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	int avg;
	
	printf("ENTER MARKS FOR MATHS\n");
	scanf("%d",&a);
		printf("ENTER MARKS FOR CHEMISTRTY\n");
	scanf("%d",&b);
	printf("ENTER MARKS FOR ENGLISH\n");
	scanf("%d",&c);
	avg = ((a+b+c)/3);
	printf("avg%d\n",avg);
	

	if(avg>=70 && avg<=100)
	{
		printf("GRADE A");
	}
	
		else if(avg>=69&&avg<=60)
		{
			printf("GRADE B");
			
		}
			else if(avg>=59&&avg>=50)
		{
			printf("GRADE C");
			
		}
			else if(avg>=49&&avg<=40)
		{
			printf("GRADE D");
			
		}
		else 
		{
			printf("fail");
		}
		return 0;
	
}