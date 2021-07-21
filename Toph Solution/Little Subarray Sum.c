#include <stdio.h>

int main() {

	int n,i,sum=0;
	scanf("%d",&n);
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int arr[n];
	for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=a;i<=b;i++)
		{
			sum+=arr[i];
		}
	printf("%d\n",sum);

	return 0;
}
