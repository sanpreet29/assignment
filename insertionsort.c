#include <stdio.h>
#include<stdlib.h>
#include <sys/time.h>
void main(){

    /*    int n;
        scanf("%d",&n);
        int arr[n];
        int i;
        for(i = 0; i < n; i++){

                arr[i] = rand();

        }
*/
        



        // FOR ASCENDING ORDER


/*
      int n;
        scanf("%d",&n);
        int arr[n];
        int i,d=0;
        for(i = 0; i < n; i++){

                arr[i] = d;
                d++;

        }
*/

        //FOR DESCENDING ORDER



        int n;
        scanf("%d",&n);
        int arr[n];
        int i,d=0;
        for(i = n; i > 0; i--){

                arr[i] = d;
                d++;

        }


         struct timeval e;

         gettimeofday(&e,NULL);
         long start=e.tv_sec*1000 + e.tv_usec/1000;

         int j,key;
            for(i=1;i<n;i++)
                {
                        key=arr[i];
                        j=i-1;
                        while(j>=0 && arr[j]>key)
                                {
                                        arr[j+1]=arr[j];
                                        j--;
                                }
                        arr[j+1]=key;
                }

         gettimeofday(&e,NULL);
         long end=e.tv_sec*1000 + e.tv_usec/1000;

          printf("%ld ", end-start);
}


