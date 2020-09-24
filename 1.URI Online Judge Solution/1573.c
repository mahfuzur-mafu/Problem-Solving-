#include <stdio.h>

int main()
{
	int a,b,c,x,y;

	while(scanf("%d %d %d",&a,&b,&c)&&(a || b || c))
	{
		y= a*b*c;
		x= (int) cbrt(y);
		printf("%d\n", x);
	}

	return 0;
}

