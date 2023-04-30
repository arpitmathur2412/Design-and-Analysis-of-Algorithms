#include<stdio.h>
#include <math.h>

int swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}


void maxHeapify(int A[],int n,int i){
    int largest = i;
    int l=2*(i+1)-1;
    int r=2*(i+1);
    if(l<n && A[l]>A[i]){
        largest=l;
    }

    if(r<n && A[r]>A[largest]){
        largest=r;
    }

    if(largest!=i){
        swap(&A[i],&A[largest]);
        maxHeapify(A,n,largest);
}
}

void build_max_heap(int A[],int n){
    for(int i=n/2;i>=0;i--){
        maxHeapify(A,n,i);
    }
}

void heap_sort(int A[],int n){
    build_max_heap(A,n);
    for(int i=n-1;i>0;i--){
        swap(&A[i],&A[0]);
        n--;
        maxHeapify(A,n,0);
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

    heap_sort(A,n);

    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    
    
    return 0;
}