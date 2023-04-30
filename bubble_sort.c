#include<stdio.h>

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void bubble_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

int main()
{
    int n,arr[n];

    printf("enter the size of array:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("enter %d element:",i);
        scanf("%d",&arr[i]);
    }
    
    bubble_sort(arr,n);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]); 
    }
    return 0;
}