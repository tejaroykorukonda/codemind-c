#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,k,res;
    scanf("%d%d%d",&x,&y,&m);
    k=pow(x,y);
    res=k%m;
    printf("%d",res);
}