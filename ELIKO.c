#include <stdio.h>
float rectangle(float l,float w);
int main ()

{
	float length,width,AREA;
	printf("enter the length\n");
	scanf("%f",&length);
	printf("enter the width\n");
	scanf("%f",&width);
AREA=rectangle(length,width);
	printf("the area is%f",AREA);
	return 0;
}

float rectangle(float l,float w)
	{
		float Area;
		Area=l*w;
		return Area;
	}