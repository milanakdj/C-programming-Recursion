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
	int fa,i=0;
	for(i=1;i<=10;i++)
	{
		fa=fact(i);
	printf("the corresponding %d fibonacci series term is %d \n",i,fa);
	
	}
	return 0;
}


