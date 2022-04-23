#include<stdio.h>
int sum(int arr[], int start, int len)
{
    if(start >= len)
        return 0;
    return (arr[start]+sum(arr,start+1,len));
}
int main()
{
    int a,n,i,sumofarray;
    int arr[n];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sumofarray = sum(arr, 0, n);
    printf("%d", sumofarray);
    return 0;
}