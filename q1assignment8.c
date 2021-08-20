#include<stdio.h>

int evenFibonacci(int n){

        if(n < 1)
                return n;

        if(n == 1)
                return 2;

        return ((4 * evenFibonacci(n-1)) + evenFibonacci(n-2));
}

int main(){

        int n;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++)
        {
        printf("%d\n", evenFibonacci(i));
        }

        return 0;
}