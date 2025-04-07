//vintergal@gmail.com
#include "graph.hpp"
namespace graph{
    using  namespace graph;
class algorithms
{
private:
    /* data */
public:
    algorithms(/* args */);
    ~algorithms();
    graph bfs(int vetrice, const graph& g);
    graph dfs(int vetrice, const graph& g);
    graph dijkstra(int vetrice, const graph& g);
    graph prim(const graph& g);
    graph kruskal(const graph& g);

};

}