#include<stdio.h>
int main()
{
    int n,odd=0,even=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r%2==0)
        even++;
        else
        odd++;
        n=n/10;
    }
    if(odd==0)
    printf("Even");
    else if(even==0)
    printf("Odd");
    else
    printf("Mixed");
    return 0;
}
