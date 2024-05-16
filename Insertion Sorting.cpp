#include<stdio.h>
void insertion_sorting(int arr[], int size)
{
int i,j;

for(i=1; i<size; i++){
int temp=arr[i];
for(j=i-1; j>=0 && arr[j]>temp; j--){
arr[j+1]=arr[j];
}
arr[j+1]=temp;

}

}

void print_array(int arr[], int size){
int i;
for(i=0; i<size; i++){
printf("%d ",arr[i]);
}
}
int main()
{
int arr[]={13,2,3,46,5,56,7,38,9,100};
int size=sizeof(arr)/sizeof(arr[0]);
printf("\nThe Unsorted Array is : ");
print_array(arr,size);
printf("\n\n\nThe Sorted Array is : ");
insertion_sorting(arr,size);
print_array(arr,size);

return 0;
} 
