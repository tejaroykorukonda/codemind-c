#include<stdio.h>
int main()
{
    int num,temp,sum=0;
    scanf("%d",&num);
    temp=num;
    while(temp){
        sum+=temp%10;
        temp=temp/10;
    }
    int res=num%sum;
    if(res==0)
    printf("True");
    else
    printf("False");
    return 0;
    
}