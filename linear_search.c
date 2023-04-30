#include<stdio.h>
int main()
{
    int n,arr[n];

    printf("enter the size of array:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("enter %d element:",i);
        scanf("%d",&arr[i]);
    }

    int x;
    printf("enter the element to search:");
    scanf("%d",&x);

    
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            printf("element found at index %d",i);
            return 0;
        }
    }
    printf("element not present");
    
    return 0;
}