#include <stdio.h>
int main(){
    int largest(int*);
    int smallest(int*);
    int largestFac(int);
    int arrSum(int*,int);
    int arr[]={1,2,3,4,5};
    int lenght = sizeof(arr)/sizeof(int);
    printf("%d\n",largest(arr));
    printf("%d\n",smallest(arr));
    printf("%d\n",largestFac(largest(arr)));
    printf("%d\n",arrSum(arr, lenght));
    return 0;
}

int largest(int *arr){
    int i;
    int max = *arr;
    for(i = 0; i<5; i++){
        if (max<arr[i]){
            max = arr[i];
        } 
    }
    return max;
}

int smallest(int *arr){
    int i;
    int min = *arr;
    for(i = 0; i<5; i++){
        if (min>arr[i]){
            min = arr[i];
        } 
    }
    return min;

}

int largestFac(int largest){
    int fac;
    for(int i = 1; i < largest; i++){
        fac *= i;
    }
    return fac;
}

int arrSum(int *arr, int lenght){
    int sum=0;
    for(int i = 0; i<lenght;i++){
        sum += arr[i];
    }
    return sum;
}
