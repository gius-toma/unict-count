#pragma once

#include "vertex.hpp"
#include "unict-list/list.h"

template <typename T>
class Graph_Vertex : public List<T> {
public:
    Graph_Vertex(T const& data) : List<T>() {
        List<T>::insert(data);
    }

    friend std::ostream& operator<<(std::ostream& out, Graph_Vertex<T>& gl) {
        out << "Graph Vertex with key" << gl.HEAD->get_data() << '\n'
            << "\tAdjacency List: ";
        Node<T>* ptr = gl.HEAD;
        while (ptr) {
            out << " -> " << ptr->get_data();
            ptr = ptr->get_next();
        } return out;
    }
};