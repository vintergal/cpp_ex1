//vintergal@gmail.com

#include <iostream>
    using namespace std;
    namespace graph{
        class graph
        {
        private:
            /* data */
            int num_of_vetrices;
            int** edges;
        public:
            graph(int num_of_vetrices);
            ~graph();
            void addEdge(int from, int to,int weight);
            void removeEdge(int from,int to);
            void printGraph();
            int getNumOfVertices();
        };
}