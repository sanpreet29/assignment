#include <stdio.h>
#include<stdlib.h>
#include <sys/time.h>
void main(){

        int n;
        scanf("%d",&n);
        int arr[n];
        int i;
        for(i = 0; i < n; i++){

                arr[i] = rand();

        }
         struct timeval e;

         gettimeofday(&e,NULL);
         long startTime=e.tv_sec*1000 + e.tv_usec/1000;

        int j,temp,sorted=0;

        for(i=0; i<n-1; i++)
                {
                        for(j=0; j<n-i-1; j++)
                        {
                                if(arr[j]>arr[j+1])
                                        {
                                                temp=arr[j+1];
                                                arr[j+1]=arr[j];
                                                arr[j]=temp;
                                                sorted=1;
                                        }
                        }
                        if(sorted==0)
                                {
                                        break;
                                }
                }
         gettimeofday(&e,NULL);
         long endTime=e.tv_sec*1000 + e.tv_usec/1000;

          printf("%ld ", endTime-startTime);


//Ascending
/*
int n;
        scanf("%d",&n);
        int arr[n];
        int i; int d=0;
        for(i = 0; i < n; i++){

                arr[i] = d;
d++;

        }
         struct timeval e;

         gettimeofday(&e,NULL);
         long startTime=e.tv_sec*1000 + e.tv_usec/1000;

        int j,temp,sorted=0;

        for(i=0; i<n-1; i++)
                {
                        for(j=0; j<n-i-1; j++)
                        {
                                if(arr[j]>arr[j+1])
                                        {
                                                temp=arr[j+1];
                                                arr[j+1]=arr[j];
                                                arr[j]=temp;
                                                sorted=1;
                                        }
                        }
                        if(sorted==0)
                                {
                                        break;
                                }
                }
         gettimeofday(&e,NULL);
         long endTime=e.tv_sec*1000 + e.tv_usec/1000;

          printf("%ld ", endTime-startTime);  */

//Descending

/*

int n;
        scanf("%d",&n);
        int arr[n];
        int i; int d=0;
        for(i = n; i > 0; i--){

                arr[i] = d;
d++;

        }
         struct timeval e;

         gettimeofday(&e,NULL);
         long startTime=e.tv_sec*1000 + e.tv_usec/1000;

        int j,temp,sorted=0;

        for(i=0; i<n-1; i++)
                {
                        for(j=0; j<n-i-1; j++)
                        {
                                if(arr[j]>arr[j+1])
                                        {
                                                temp=arr[j+1];
                                                arr[j+1]=arr[j];
                                                arr[j]=temp;
                                                sorted=1;
                                        }
                        }
                        if(sorted==0)
                                {
                                        break;
                                }
                }
         gettimeofday(&e,NULL);
         long endTime=e.tv_sec*1000 + e.tv_usec/1000;

          printf("%ld ", endTime-startTime); */

}