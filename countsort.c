#include<stdio.h>
#include<stdlib.h>

int sort(int *arr, int n){

        int count = 0, key = 0;
        int i,j;
        for(i = 0; i < n-1; i++){

                for(j = i+1; j < n; j++){

                        if(arr[i] > arr[j]){

                                key = arr[i];
                                arr[i] = arr[j];
                                arr[j] = key;
                                count++;
                        }
                }
        }
        return count;
}

void main(){

        int n, arr[20];
        printf("Enter number of elements: ");
        scanf("%d", &n);

        for(int i = 0; i < n; i++){

                scanf("%d", &arr[i]);
        }

        printf("%d ", sort(arr, n));
}