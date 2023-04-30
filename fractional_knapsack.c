#include<stdio.h>

int main()
{
    int p[]={10,20,32};
    int w[]={5,4,8};
    int pw[]={2,5,4};
    int W=6;

    int weight=0;
    int profit=0;

    while(weight<W){
        int max=0;
        int index;

        for(int i=0;i<3;i++){
            if(pw[i]>max && w[i]>0){
                max=pw[i];
                index=i;
            }
        }

        weight++;
        w[index]=w[index]-1;
        profit+=pw[index];
    }
    printf("profit will be %d",profit);
    
    return 0;
}