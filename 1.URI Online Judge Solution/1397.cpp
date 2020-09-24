#include<stdio.h>
int main()
{
	int i,n,a,b,a_score=0,b_score=0;
	while(1)
    {
		scanf("%d",&n);
		if(n==0)
			break;
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if(a>b)
			a_score++;
		if(b>a)
			b_score++;
	}
	printf("%d %d\n",a_score,b_score);
	a_score=b_score=0;
  }
return 0;
}
