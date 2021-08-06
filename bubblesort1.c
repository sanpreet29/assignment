#include <stdio.h>
#include<stdlib.h>
#include <sys/time.h>
void main(){

        int n; int d=0;
        scanf("%d",&n);
        int arr[n];
        int i;
        for(i = 0; i < n; i++){
                arr[i]=d;
d++;
        }
         struct timeval tv1,tv2;

         gettimeofday(&tv1,NULL);

        int j,temp;
        for(i=0; i<n-1; i++)
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
         gettimeofday(&tv2,NULL);
          printf("%ld : %ld/n",tv2.tv_sec-tv1.tv_sec,tv2.tv_usec-tv1.tv_usec);

}
