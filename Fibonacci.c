#include<stdio.h>
int fibo(int n);
int main()
{   int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",fibo(i));
    }

}
int fibo(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else 
    {
        return fibo(n-1)+fibo(n-2);
    }   
}
