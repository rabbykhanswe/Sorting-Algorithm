#include<stdio.h>
#include<stdlib.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 11, 15, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int position;

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nWhich index you want to delete : ");
    scanf("%d", &position);

    for(int i=position; i<=size; i++)
    {

        arr[i]=arr[i+1];
    }
    size--;


    printf("The Updated Array is : ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
