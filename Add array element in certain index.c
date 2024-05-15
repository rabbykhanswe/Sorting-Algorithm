#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int arr[]={1,2,3,4,5,6,8,9,11,15,14};
    int size=sizeof(arr)/sizeof(arr[0]);

    int position,element;


    printf("\nThe Array is : ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }


    printf("\n\n\nWhich index you want to add an element : ");
    scanf("%d",&position);


    for(int i=position; i>=size; i++)
    {

        arr[i]=arr[i+1];
    }


    printf("\n\nEnter your element : ");
    scanf("%d",&element);


    arr[position] = element;
    printf("\nVale is %d : ",arr[position]);

    printf("\n\n\nThe Updated Array is : ");
    for(int j=0; j<size; j++)
    {
        printf("%d ",arr[j]);
    }


getch();
}
