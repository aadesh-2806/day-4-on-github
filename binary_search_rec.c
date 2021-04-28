#include<stdio.h>

int bis(int *,int ,int ,int );
void main()
{
	int n,t,i,k,a[50],r,b;

	printf("hello aadesh agrawal(2019uec1660)\nenter values=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter value to search=");
	scanf("%d",&k);
	
	printf("%d", bis(a,0,k,n-1)+1);
	
	getch();
}

int bis(int a[],int l,int k,int h)
{
	int m;
	if(h>=l)
	{
		m=(l+h)/2;
		if(a[m]==k)
		{
			return m;
		}
		else
		{
			if(a[m]<k)
			{
				return bis(a,l-1,k,h);
			}
			else
			{
				return bis(a,l,k,h-1);
			}
		}
	}
	else
	{
		return -1;
	}
}
