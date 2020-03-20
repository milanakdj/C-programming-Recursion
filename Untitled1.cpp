#include<stdio.h>


void rep(char nn[44])
{
	static int n=9;
	printf("%s\n",nn);
	if(n>0)
	{
		n--;
		rep(nn);
	}
	
}
int main()
{
	char name[40];
	printf("enter your name: \n");
	scanf("%s",name);
	int a=10;
	rep(name);
	return 0;
}


//
//void rep(char nn[44],int n)
//{
//	printf("%s\n",nn);
//	if(n>0)
//	{
//		rep(nn,n-1);
//	}
//	
//}
//int main()
//{
//	char name[40];
//	printf("enter your name: \n");
//	scanf("%s",name);
//	int a=10;
//	rep(name,a);
//	return 0;
//}
