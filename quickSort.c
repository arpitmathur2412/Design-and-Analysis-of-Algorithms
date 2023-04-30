#include<stdio.h>

void swap(int* x,int* y){
    int temp= *x;
    *x= *y;
    *y=temp;
}

int partition(int arr[],int p,int r){
    int x=arr[r];
    int i=p-1;

    for(int j=p;j<r;j++){
        if(arr[j]<=x){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[r]);
    return i+1;
}

void quickSort(int arr[],int p,int r){

    if(p<r){
        int q=partition(arr,p,r);
        quickSort(arr,p,q-1);
        quickSort(arr,q+1,r);
    }
}

int main()
{
    int n = 5;
    int arr[5]; 
    
    for(int i=0;i<n;i++){
        printf("Enter the elements:");
        scanf("%d",&arr[i]);
    }

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);   
    }

   return 0;
}
