#include<stdio.h>
#include<math.h>

void main()
{
	
	int r;
	long long int n;
	float i;
	printf("hello\nenter value=");
	scanf("%lld",&n);
	printf("%lld",n);
	printf("enter base=");
	scanf("%d",&r);
	
	i=(log(n))/(log(r));
	printf("%f",i);
	
	getch();
	
}
