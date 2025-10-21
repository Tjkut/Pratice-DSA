#include<stdio.h>
#include<stdlib.h>
int findPos(int *arr,int size_arr,int n){
    int left=0,right=size_arr-1,pos;
    while(left<=right){
         int mid=left+right;
        if(arr[mid]==n){
            return mid;
        }
        else if(arr[mid]>n){
            pos=mid;
            right=mid-1;
        }
        else{
            
            left=mid+1;
        }
    }
    return pos;
}
int *insertArray(int *arr,int *size_arr,int n){
    int pos=findPos(arr,*size_arr,n);
    (*size_arr)++;
    for(int i=*size_arr-1;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=n;
    return arr;
}
int main(){
    
    int size_arr=5;
    int *arr=malloc(size_arr*sizeof(int));
    arr[0]=1;
    arr[1]=3;   
    arr[2]=5;
    arr[3]=7;
    arr[4]=9;
    int n=6;
    printf("pos at number %d is %d\n",n,findPos(arr,size_arr,n));
    int *res=insertArray(arr,&size_arr,n);
    for(int i=0;i<size_arr;i++){
        printf("%d ",res[i]);
    }
    return 0;
}

