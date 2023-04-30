#include<stdio.h>


void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void heapify(int arr[],int n,int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;

        if(l<n && arr[l]>arr[largest]){
            largest=l;
        }

        if(r<n && arr[r]>arr[largest]){
            largest=r;
        }

        if(largest!=i){
            swap(&arr[i],&arr[largest]);
            heapify(arr,n,largest);
        }   
    }

void heapSort(int arr[],int n){
    for(int i=n/2;i>=0;i--){
        heapify(arr,n,i);
    }

    for(int j=n-1;j>=0;j--){
        swap(&arr[0],&arr[j]);
        heapify(arr,j,0);
    }

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

    heapSort(A,n);

    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    return 0;
}