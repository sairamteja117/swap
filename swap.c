#include<stdio.h>

int main()
{
	int a=25,b=35;
	printf("BEFORE SWAPPING VALUES OF: a=25 and b=35 \n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("AFTER SWAPPING VLAUES OF: a=%d and b=%d",a,b);
}
