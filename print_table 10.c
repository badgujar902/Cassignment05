#include<stdio.h>
int main()
{
    int i,j;
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d X %d  = %d\n",i,j,i*j);
        }

    }
    return 0;
}
