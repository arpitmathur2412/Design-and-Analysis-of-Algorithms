#include<stdio.h>

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void selection_sort(int arr[],int n){
    int min,index;
    for(int i=0;i<n-1;i++){
        min=arr[i];
        index=i;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                index=j;
            }
        }
        swap(&arr[i],&arr[index]);
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

    selection_sort(arr,n);

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}