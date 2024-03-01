#include <stdio.h>
#include <stdlib.h>

//graph
int visited[7] = {0,0,0,0,0,0,0};         //7 is size of graph

    //adjacency matrix
    int a[7][7] = {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    };



void DFS(int i){
    int j;
    printf("%d", i);        //print node 

    visited[i]=1;           //mark the node visited

    for(int j=0; j<7;j++){

        if(a[i][j]==1 && !visited[j]){   //if the node at which we are present at is connected to other nodes and those are unvisited.
            DFS(j);
        }
         
    }
}
int main(){

    //DFS IMPLEMENTATION

    DFS(0);
    return 0;

}