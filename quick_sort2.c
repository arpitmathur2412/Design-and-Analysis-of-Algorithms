#include<stdio.h>


void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void quickSort(int arr[],int low,int high){

    if(low>high){
        return ;
    }

    int s=low;
    int e=high;
    int temp=0;
    int pivot= arr[s+(e-s)/2];

    while(s<=e){
        while(arr[s]<=pivot){
            s++;
        }
        while(arr[e]>=pivot){
            e--;
        }

        if(s<e){
           swap(&arr[s],&arr[e]);
            s++;
            e--;
        }
    }
    
    quickSort(arr,low,e);
    quickSort(arr,s,high);

}

int main()
{
    
    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);

    int A[n];

    for(int i=0;i<n;i++){
        printf("enter index %d: ",i);
        scanf("%d",&A[i]);
    }

    quickSort(A,0,n-1);

    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    
    
    return 0;
    return 0;
}