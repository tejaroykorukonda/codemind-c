#include<stdio.h>
int main()
{
    int n,d,s;
    scanf("%d",&n);
    while(n/10!=0)
    {
        s=0;
        while(n!=0)
        {
            d=n%10;
            n=n/10;
            s+=d;
        
        }
         n=s;
     
    
}
    printf("%d",s);
}