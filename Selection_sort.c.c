#include<stdio.h>
#include<conio.h>

void swap(int array[], int i, int min)
{
    int temp = array[i];
    array[i] = array[min];
    array[min] = temp;

}

void selection_sort(int array[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        int min = i;

        for (int j = i+1; j<size; j++)
        {
            if(array[j] < array[min])
            {
                min = j;

            }

            if(min != i)
            {

                swap(array, i, min);
            }

        }
    }


}

void print_array(int array[], int size)
{
    printf("Your Sorted Array is : ");

    for(int i = 0; i<size; i++)
    {
        printf("%d ",array[i]);
    }

}
int main()
{

    int array[] = {12,45,15,40,55,1,555,453,100};

    int size = sizeof(array)/array[0];

    selection_sort(array, size);

    print_array(array, size);


    getch();
}
