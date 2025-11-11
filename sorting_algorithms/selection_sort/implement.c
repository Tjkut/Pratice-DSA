#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *a,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
void initializeArray(int *arr, int size_arr, int min, int max)
{
    for (int i = 0; i < size_arr; i++)
    {
        arr[i] = rand() % (max - min + 1) + min;
    }
}
void selection_sort(int *arr,int size_arr){
    for(int i=0;i<size_arr-1;i++){
        int min_index=i;
        for(int j=i+1;j<size_arr;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(&arr[i],&arr[min_index]);
    }
}
int main(){
    time_t t;
    srand((unsigned)time(&t));
    int arr[100];
   int size_arr;
   scanf("%d",&size_arr);
   initializeArray(arr,size_arr,0,1000);
   selection_sort(arr,size_arr);
   for(int i=0;i<size_arr;i++){
       printf("%d ",arr[i]);
   }
}
