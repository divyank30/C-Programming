#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter Any Table No.");
    scanf("%d",&n);
    do
    {
        printf("%d\n",n*i);
        i++;
    } while (i<=10);
    return 0;
    
}