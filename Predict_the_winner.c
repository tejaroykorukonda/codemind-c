#include<stdio.h>
int main()
{
    int n,i,arr[100],p=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+arr[i];
        }
        else
        {
            p=p+arr[i];
        }
    }
    if((s-p)%4==0)
    {
        printf("X");
    }
    else{
        printf("Y");
    }
}