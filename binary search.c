#include<stdio.h>
int main()
{
	int l,h,n,m,a;
	printf("enter the capacity of the array  ");
	scanf("%d",&n);
	int z[n];
	
	int i;
	printf("enter %d elements ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&z[i]);
	}
	
	printf("enter the number you want to find ");
	scanf("%d",&a);
	
	l=0;
	h=n-1;
	m=(l+h)/2;
	while(l<=h)
	{
		if(z[m]<a)
		l=m+1;
		else if(z[m]==a)
		{
			printf("found at %d",m+1);
			break;
		}
		else 
		h=m-1;
		m=(l+h)/2;
	}
}
