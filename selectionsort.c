#include <stdio.h>
#include<stdlib.h>
#include <sys/time.h>
void main(){

/*        int n;
        scanf("%d",&n);
        int arr[n];
        int i;
        for(i = 0; i < n; i++){

                arr[i] = rand();

        }
*/

        // FOR ASCENDING ORDER



/*     int n;
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

         int j,min,temp;
         for(i = 0; i < n-1; i++){
                min = i;

                for(j = i+1; j < n; j++){

                        if(arr[j] < arr[min]){
                                min = j;
                        }
                }

                temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;

        }


         gettimeofday(&e,NULL);
         long end=e.tv_sec*1000 + e.tv_usec/1000;

          printf("%ld ", end-start);
}

