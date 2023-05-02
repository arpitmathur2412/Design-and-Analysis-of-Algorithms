#include<stdio.h>

int main()
{

int graph[5][5] = {
  {0, 9, 75, 0, 0},
  {9, 0, 95, 19, 42},
  {75, 95, 0, 51, 66},
  {0, 19, 51, 0, 31},
  {0, 42, 66, 31, 0}};

int selected[5]={0};

for(int i=0;i<5;i++){

    while(selected[i]==1){     // find unselected vertex
        i++;
    }

    selected[i]=1;  // mark the vertex as selected

    int min=9999;

    for(int j=0;j<5;j++){                   // find minimum edge from all edges for that vertex
        if(graph[i][j]<min && i!=j && graph[i][j]!=0){                    
            min=graph[i][j];
        }
    }
    printf("min: %d\n",min);
    for(int k=0;k<5;k++){    // set all remaining vertices as 0 after selecting minimum edge
        if(graph[i][k]!=0 && graph[i][k]!=min){
            graph[i][k]=0;
        }
    }

}

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        printf("%d ",graph[i][j]);
    }
    printf("\n");
}
    
    return 0;
} 