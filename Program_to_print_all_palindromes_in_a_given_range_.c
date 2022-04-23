#include<stdio.h>
int pal(int n)
{
	int r,rev=0;
	while(n != 0)
	{
	r=n%10;
	rev=rev*10+r;
	n/=10;
    }
    return rev;
}
int main()
{
	int i,a,b;
	scanf("%d %d",&a , &b);
	for(i=a;i<b;i++)
	{
		if (i==pal(i))
		printf("%d ",pal(i));
	}
}