#include<stdio.h>

int x(int N)
{
    int x=1;
    for(int i=1;i<=N;i++)
    {
       x=x*i;
    }
return x;
}

int main()
{
    int n,i;
    printf("Enter the value of N:\n");
    scanf("%i",&n);

    for(int i=1;i<=n;i++)
    {
        printf("The factorial of %i : %i\n",i,x(i));
    }

return 0;
}

