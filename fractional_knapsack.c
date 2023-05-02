#include<stdio.h>

int main()
{
    int p[]={60,100,120};
    int w[]={10,20,30};
    int pw[3];

    for(int i=0;i<3;i++){
        pw[i]=p[i]/w[i];
    }
    
    int W=50;

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