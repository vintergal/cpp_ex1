#include "graph.hpp"
namespace graph
{
    

    graph::graph(int num_of_vetrices): num_of_vetrices(num_of_vetrices)
    {
        this->edges=new int*[num_of_vetrices];
        for (int i=0;i<(num_of_vetrices);i++){
            this->edges[i]=new int[num_of_vetrices];
            for (int j = 0; j < (num_of_vetrices); j++)
            {
                this->edges[i][j]=0;
            }
            
        }
    }

    graph::~graph()
    {
        for (int i = 0; i < this->num_of_vetrices; i++)
        {
            delete[] this->edges[i];
            
        }
        delete[] this->edges;
        
    }

    void graph::addEdge(int from, int to,int weight){
        bool error=false;
        if (weight<0){
            cout<<"unsupported weight";
            error=true;
        }
        if (to<0 || from<0 || to>=this->num_of_vetrices || to>=this->num_of_vetrices){
            cout<<"no such vertices as in to or from";
            error=true;
        }
        
        if (to==from){
            cout<<"vertices cant connect to itself";
            error=true;
        }


        if (error){
            return;
        }

        this->edges[from][to]=weight;

    }
    void graph::removeEdge(int from, int to){
        

        this->addEdge(from,to,0);

    }

    void graph::printGraph(){
        cout<< "there are "<<this->num_of_vetrices <<"vertices\n";
        cout<< "edges of the graph:\n";
        for (int i=0;i<(this->num_of_vetrices);i++){
            
            for (int j = 0; j < (num_of_vetrices); j++)
            {
                if (this->edges[i][j]>0){
                    cout<<"from "<<i<<" to "<<j;
                }
            }
            
        }
        

    }

    
}