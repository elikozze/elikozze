#include<stdio.h>
int main()
{
	int a;
	printf("ENTER A NUMBER\n");
	scanf("%d",&a);
	if(a%17==0)
	{
		printf("number is divisible by 17");
	}
		else 
		{
			printf("number is not divisible by 17");
			
		}
		return 0;
	
}