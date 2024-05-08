#include <stdio.h>
void swap(int* arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void Bubble_Sort(int arr[], int size){
    int i, j;
    for(i=0; i<size-1; i++){
        for(j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr, j, j+1);
            }
        }
    }
}
void print_array(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);

    }
    printf("\n");
}

int main() {
  int arr[] = {14,1,15,2,16,5,48,45,78,9,70,8};
  int size = sizeof(arr) / sizeof(arr[0]);
  Bubble_Sort(arr,size);
  print_array(arr, size);
    return 0;
}
