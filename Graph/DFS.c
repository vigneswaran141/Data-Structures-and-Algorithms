#include <stdio.h>
#define MAX 3

int adjMatrix[MAX][MAX];
int visited[MAX];
int n;

void DFS(int vertex)
{
    printf("%d ",vertex);
    visited[vertex]=1;
    for(int i=0;i<n;i++)
        {
            if(adjMatrix[vertex][i]==1 && !visited[i])
            {
               DFS(i);
            }
        }
}
int main()
{
    int edges,u,v;
    printf("Enter number of vertices:");
    scanf("%d",&n);
    printf("Enter number of edges:");
    scanf("%d",&edges);
    for(int i=0;i<n;i++)
    {
        visited[i]=0;
        for(int j=0;j<n;j++)
        {
            adjMatrix[i][j]=0;
        }
    }
    for(int i=0;i<edges;i++)
    {
        printf("Enter edge(u,v):");
        scanf("%d%d",&u,&v);
        adjMatrix[u][v]=1;
        adjMatrix[v][u]=1;
    }
    printf("DFS traversal starting from vertex 0:");
    DFS(0);
    return 0;
}
