#include <iostream>
#include <list>
using namespace std;

class Graph{
  int numVertices;
  list<int>* Adjlist;
  bool*visited;
  public:
  Graph(int vertex);
  void addEdge(int src, int dest);
  void BFS(int startVertex);
};

Graph::Graph(int vertex){
  numVertices=vertex;
  Adjlist= new list<int>[vertex];
}

void Graph::addEdge(int src, int dest){
  Adjlist[src].push_back(dest);
  Adjlist[dest].push_back(src);
}

void Graph:: BFS(int startVertex){
  visited = new bool[numVertices];
  for(int i=0;i<numVertices;i++)
  visited[i]=false;

  list<int>queue;
  visited[startVertex]=true;
  queue.push_back(startVertex);

  list <int>::iterator i;
 while(!queue.empty()){
  int currVertex=queue.front();
  cout<<"Visited "<<currVertex<<" ";
  queue.pop_front();


  for(i=Adjlist[currVertex].begin();i!=Adjlist[currVertex].end();++i){
    int adjVertex = *i;
    if(!visited[adjVertex]){
      visited[adjVertex]=true;
      queue.push_back(adjVertex);
    }
  }
 }
}
int main() {
  Graph g(4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(2, 3);
  g.addEdge(3, 3);

  g.BFS(2);

  return 0;
}
