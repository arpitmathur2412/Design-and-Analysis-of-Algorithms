#include<stdio.h>

# define MAX 100;

void merge(int a[],int p,int q,int r){
    int n1=q-p+1;
    int n2=r-q;

    int i,j;
    int L[n1+1],R[n2+1];

    for(i=0;i<n1;i++){
        L[i]=a[p+i];
    }
    for(j=0;j<n2;j++){
        R[j]=a[q+j+1];
    }

    L[n1]=MAX;
    R[n2]=MAX;

    i=0;j=0;
    for(int k=p;k<=r;k++){
        if(L[i]<R[j]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;
        }
    }
}


void merge_sort(int a[],int p,int r){
    if(p<r){
        int q=(p+r)/2;
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
        merge(a,p,q,r);
    }
}

int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int p=0;
    int r=n-1;

    merge_sort(a,p,r);

    for(int i=0;i<n;i++){
     printf("%d",a[i]);
    }
    return 0;
}
