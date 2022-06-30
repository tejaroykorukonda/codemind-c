#include<stdio.h>
int main()
{
    long int m,n;
    int i,j,c=0;
    scanf("%ld",&m);
    scanf("%ld",&n);
    for(i=m;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d
",i);
        }
    }
}