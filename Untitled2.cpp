#include<stdio.h>
int fact(int num)
{
	int aa=0;
	if(num>1)
	{
		aa=fact(num-1)*num;
		return aa;
	}
	else
	{
		return 1;
	}
	
}

int main()
{
	int n;
	printf("enter a number \n");
	scanf("%d",&n);
	int fa=fact(n);
	printf("the factorial of the givern number is %d",fa);
	return 0;
}
