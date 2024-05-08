#include <stdio.h>

int main() {
    int arr[]={14,12,5,7,8,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){

            if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

            }
        }
    }
    printf("sorting elements are :");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}
