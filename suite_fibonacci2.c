#include <stdio.h>
int fibonacci(int u0,int n)
{
    if (n==0)
        return u0;
    else if (n==1)
        return u0+1;
    else
        return fibonacci(u0, n - 1) + fibonacci(u0, n - 2);
}
int somme(int u0,int n){
    int sum=0;
    for (int i=0;i<=n;i++){
        sum+=fibonacci(u0,i);
    }
    return sum;
}
int main()
{
    int n,u0;
    printf("Entrer le rang a calculer puis le premier terme \n");
    scanf("%d %d",&n,&u0);
    printf("%d-eme Fibonacci Number: %d \n", n, fibonacci(u0,n));
    printf("La somme est: %d \n",somme(u0,n));
    return 0;
}
