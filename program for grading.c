#include<stdio.h>
int main()
{
	int a;
	printf("ENTER A NUMBER\n");
	scanf("%d",&a);
	if(a>=70 && a<=100)
	{
		printf("GRADE A");
	}
	
		else if(a>=69&&a<=60)
		{
			printf("GRADE B");
			
		}
			else if(a>=59&&a>=50)
		{
			printf("GRADE C");
			
		}
			else if(a>=49&&a<=40)
		{
			printf("GRADE D");
			
		}
		else 
		{
			printf("fail");
		}
		return 0;
	
}