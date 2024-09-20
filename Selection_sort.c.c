#include<stdio.h>
#include<conio.h>

//swap function
void swap(int arr[], int i, int min)
{
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
}

//selection sorting function
void selection_sorting(int arr[], int size)
{
    for(int i = 0; i < size-1 ; i++)
    {
        int min = i;

        for(int j = i+1; j < size; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }

            if(arr[min] != i)
            {
                swap(arr, i, min);
            }
        }
    }
}


//A function for printing array
void print_arr(int arr[], int size)
{
    printf("Your Sorted Array is : ");

    for(int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
}

/*main function
from where the program will be start*/
int main()
{
    int size;

    printf("How many digit you want to enter into your array : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter Your Array Value : ");

    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);

    }


    selection_sorting(arr, size);
    print_arr(arr, size);


getch();
}
