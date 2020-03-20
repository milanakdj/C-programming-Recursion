#include<stdio.h>
void rever()
{
	char a;
	scanf("%c",&a);
	
	if(a!='\n')
	{
		rever();
		printf("%c",a);
	}
}

int main()
{
	printf("enter a line of text \n");
	rever();
	return 0;
}
