#include<stdio.h>
	
void avg(int  ,int );
void main()
{
	int n,m;
	float s;
	
	
	printf("hello\nenter no.=");
	scanf("%d%d",&n,&m);
	
		avg(n,m);
	
	getch();
													//average
}

void avg(int x,int y)
{
		float s;

		s=(x+y)/2.0;
		printf("%f",s);
		
		getch();
}
