#include "graph_list.hpp"
#include <iostream>

int main() {
    Graph_List<int> gl;

    gl.add_vertex(10);
    gl.add_vertex(11);
    gl.add_vertex(12);
    gl.add_vertex(13);

    std::cout << gl << std::endl;

    gl.add_edge(10,11);
    gl.add_edge(12,13);
    gl.add_edge(13,11);


}