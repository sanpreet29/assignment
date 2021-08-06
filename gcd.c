#include<stdio.h>
int GCD(int a,int b)
{
        if(b==0)
        {
                return(a);
        }
        else
        {
                if(a<b)
                {
                        return(GCD(b,a));
                }
                else
                {
                        return(GCD(b,a%b));
                }
        }
}

void main()
{
        int n1,n2,r;
        printf("Enter any 2 numbers: ");
        scanf("%d %d",&n1,&n2);
        r=GCD(n1,n2);
        printf("GCD= %d",r);
}
