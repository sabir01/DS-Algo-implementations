#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;

public:
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(int s);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::BFS(int s)
{
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
    
    list<int> queue;
    queue.push_back(s);
    visited[s] = true;
    list<int>::iterator it;

    while(!queue.empty())
    {
        s = queue.front();
        queue.pop_front();
        visited[s] = true;
        cout << s << " ";

        for(it = adj[s].begin(); it != adj[s].end(); it++)
        {
            if(!visited[*it])
            {
                queue.push_back(*it);
                visited[*it] = true;
            }
        }
    }
}

int main()
{
    Graph example = Graph(5);

    example.addEdge(0, 1); 
    example.addEdge(0, 2); 
    example.addEdge(1, 2); 
    example.addEdge(2, 0); 
    example.addEdge(2, 3); 
    example.addEdge(3, 3);

    example.BFS(2);

}