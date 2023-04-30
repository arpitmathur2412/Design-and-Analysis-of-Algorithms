#include<stdio.h>

int max(int a, int b){
    return (a>b)?a:b;
}

int KS(int i,int w[],int p[],int W){
    if(i==0 || W==0){
        return 0;
    }

    else if(w[i]<=W){
        return max(p[i]+KS(i-1,w,p,W-w[i]),KS(i-1,w,p,W));
    }

    else if(w[i]>W){
        return KS(i-1,w,p,W);
    }
}

int main()
{
    int n=3;
    int p[]={10,12,28};
    int w[]={1,2,4};
    int W=6;

    printf("%d",KS(n,w,p,W));
    
    return 0;
}