#include<stdio.h>
#include<math.h>

void main()
{	
	int i,a[50][50],s,t,n,r,j;
	printf("hello\nenter value=");
	scanf("%d",&n);
	
	t=0;
	for(i=0;i<n;i++)
	{
		j=0;
		for(s=i;s!=0;)
		{	
			a[i][j++]=s%2;
			s=s/2;
		}
		r=0;
		for(s=0;s<j;s++)
		{
			if(a[i][s]==1)
			{
				r++;
			}
		}
		if((r+i)==n)
		{
			printf("false");
			break;
		}
		else
		{
			t++;
		}
	}
	
	if(t==n)
	{
		printf("true");
	}
	getch();
}
