//c program showing usage of assignment operators
#include <stdio.h>
int main()
{
int a;
printf("enter a");
scanf("%d",&a);
a-=10;
printf("value of a is %d\t",a);
a+=10;
printf("value of a is %d\n",a);
return 0;	
}