#include<stdio.h>
int main()
{
    int n,temp,d,f,i,s=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        i=1;
        f=1;
        while(i<=d)
        {
            f=f*i;
            i++;
            

        }
        s=s+f;
        n=n/10;
        
    }
    if(s==temp)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}