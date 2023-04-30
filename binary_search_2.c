#include<stdio.h>

int binarySearch(int arr[],int x,int l,int h){
int mid=(l+h)/2;


if(l<=h){
    if(x<arr[mid]){
        return binarySearch(arr,x,l,mid-1);
    }
    if(x>arr[mid]){
        return binarySearch(arr,x,mid+1,h);
    }

    if(x==arr[mid]){
        return x;
    }
}
return -1;
 
}

int main()
{
    int arr[]={1,2,3,4,5};
    printf("%d",binarySearch(arr,6,0,5));
    return 0;
}