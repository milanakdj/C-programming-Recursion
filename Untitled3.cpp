#include<stdio.h>
int fact(int num)
{
	int aa=0;
	if(num>1)
	{
		aa=fact(num-1)+fact(num-2);
		return aa;
	}
	else if(num==1)
	{
		return 0;
	}
	else if(num==2)
	{
		return 1;
	}
	else if(num=3)
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
	printf("the corresponding fibonacci series term is %d",fa);
	return 0;
}


