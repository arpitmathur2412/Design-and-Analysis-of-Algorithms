#include <stdio.h>

int binarySearch(int arr[], int x, int low, int high) {
  while (low <= high) {

    int mid = low + (high - low) / 2;
    
    if (arr[mid] == x)
      return mid;

    if (arr[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }
  return -1;
}

int main(void) {
    
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter %d element:",i);
        scanf("%d",&arr[i]);
    }
  
    int x;

    printf("enter the elment to search:");
    scanf("%d",&x);
    
    int result = binarySearch(arr, x, 0, n-1);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
    
return 0;
}