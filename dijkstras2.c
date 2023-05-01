#include<stdio.h>

#define max 99
int V=7;

int selectMinVertex(int cost[],int selected[],int n){
    int min =99;
    int index=0;

    for(int i=0;i<n;i++){
        if(cost[i]<min && selected[i]==0){
            min=cost[i];
            index=i;
        }
    }
    return index;
} 

void dijkstras(int graph[V][V]){
    int selected[V];
    int cost[V];
    int parent[V];

    for(int i=0;i<V;i++){
        selected[i]=0;
        cost[i]=max;
    }
    parent[0]=-1; 
    cost[0]=0;

for(int j=0;j<V-1;j++){

    int u=selectMinVertex(cost,selected,V);
    selected[u]=1;

    for(int i=0;i<V;i++){ 
        if(graph[u][i]!=0 && selected[i]==0 && cost[i]!=0 && (cost[u] + graph[u][i]<cost[i])){
            cost[i]=cost[u]+graph[u][i];
            parent[i]=u;
        }
    }
}
for(int i=0;i<V;i++){
    printf("%d ",cost[i]);
}
}


int main()
{

int Graph[V][V];
  

  Graph[0][0] = 0;
  Graph[0][1] = 0;
  Graph[0][2] = 1;
  Graph[0][3] = 2;
  Graph[0][4] = 0;
  Graph[0][5] = 0;
  Graph[0][6] = 0;

  Graph[1][0] = 0;
  Graph[1][1] = 0;
  Graph[1][2] = 2;
  Graph[1][3] = 0;
  Graph[1][4] = 0;
  Graph[1][5] = 3;
  Graph[1][6] = 0;

  Graph[2][0] = 1;
  Graph[2][1] = 2;
  Graph[2][2] = 0;
  Graph[2][3] = 1;
  Graph[2][4] = 3;
  Graph[2][5] = 0;
  Graph[2][6] = 0;

  Graph[3][0] = 2;
  Graph[3][1] = 0;
  Graph[3][2] = 1;
  Graph[3][3] = 0;
  Graph[3][4] = 0;
  Graph[3][5] = 0;
  Graph[3][6] = 1;

  Graph[4][0] = 0;
  Graph[4][1] = 0;
  Graph[4][2] = 3;
  Graph[4][3] = 0;
  Graph[4][4] = 0;
  Graph[4][5] = 2;
  Graph[4][6] = 0;

  Graph[5][0] = 0;
  Graph[5][1] = 3;
  Graph[5][2] = 0;
  Graph[5][3] = 0;
  Graph[5][4] = 2;
  Graph[5][5] = 0;
  Graph[5][6] = 1;

  Graph[6][0] = 0;
  Graph[6][1] = 0;
  Graph[6][2] = 0;
  Graph[6][3] = 1;
  Graph[6][4] = 0;
  Graph[6][5] = 1;
  Graph[6][6] = 0;


    dijkstras(Graph);
    return 0;
}