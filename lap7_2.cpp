#include <iostream>
#include <queue>
#include <stack>
using namespace std;
class Graph {
private:
int n;
int adjMatrix[10][10]; // MT adjacent

void DFSUtil(int v, bool visited[]) {
visited[v] = true;
cout << v << " ";

for (int i = 0; i < n; ++i) {
if (adjMatrix[v][i] && !visited[i]) {
DFSUtil(i, visited);
}
}
}

public:
Graph(int n) : n(n) {
for (int i = 0; i < n; ++i) {
for (int j = 0; j < n; ++j) {

adjMatrix[i][j] = 0;
}
}
}

void addEdge(int u, int v) {
adjMatrix[u][v] = 1;
adjMatrix[v][u] = 1;
}

void BFS(int start) {
bool visited[10] = { false };
queue<int> queue;
visited[start] = true;
queue.push(start);

while (!queue.empty()) {
int v = queue.front();
cout << v << " ";
queue.pop();

for (int i = 0; i < n; ++i) {
if (adjMatrix[v][i] && !visited[i]) {
visited[i] = true;
queue.push(i);
}
}
}
cout << endl;
}

void DFS(int start) {
bool visited[10] = { false };

DFSUtil(start, visited);
cout << endl;
}

void printGraph() {
for (int i = 0; i < n; ++i) {
for (int j = 0; j < n; ++j) {
cout << adjMatrix[i][j] << " ";
}
cout << endl;
}
}
};

int main() {
Graph g(8);
g.addEdge(0, 1);
g.addEdge(0, 3);
g.addEdge(0, 7);
g.addEdge(1, 2);
g.addEdge(1, 5);
g.addEdge(2, 6);
g.addEdge(3, 8);

cout << "Ma tran ke cua DT:" << endl;
g.printGraph();

cout << "BFS starting from vertex 0:" << endl;
g.BFS(0);

cout << "DFS starting from vertex 0:" << endl;
g.DFS(0);

return 0;
}