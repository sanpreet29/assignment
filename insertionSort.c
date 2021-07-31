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

      



        // FOR ASCENDING ORDER



/*      int n;
        scanf("%d",&n);
        int arr[n];
        int i,d=0;
        for(i = 0; i < n; i++){

                arr[i] = d;
                d++;

        }

*/
        //FOR DESCENDING ORDER


/*
        int n;
        scanf("%d",&n);
        int arr[n];
        int i,d=0;
        for(i = n; i > 0; i--){

                arr[i] = d;
                d++;

        }
*/

         struct timeval e;

         gettimeofday(&e,NULL);
         long startTime=e.tv_sec*1000 + e.tv_usec/1000;

         int j,temp;
            for(i=1;i<n;i++)
                {
                        temp=arr[i];
                        j=i-1;
                        while(j>=0 && arr[j]>temp)
                                {
                                        arr[j+1]=arr[j];
                                        j--;
                                }
                        arr[j+1]=temp;
                }

         gettimeofday(&e,NULL);
         long endTime=e.tv_sec*1000 + e.tv_usec/1000;

          printf("%ld ", endTime-startTime);
}

