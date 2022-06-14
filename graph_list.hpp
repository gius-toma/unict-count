#pragma once

#include "graph_list.hpp"

template <typename T>
class Graph_List {
    List<Graph_Vertex<T>> m_vertices;
    std::size_t n_vertex;

public:
    Graph_List() : n_vertex(0) {}

    bool add_vertex(T const& data) {
        return add_vertex(new Vertex<T>(data));
    }

    bool add_vertex(Vertex<T>* vertex) {
        if(this->n_vertex == this->max_vertex)
            return false;
        
        vertices[n_vertex++] = vertex;
        return true;
    }

    void add_edge(T const& data0, T const& data1) {

    }

    Node<Graph_Vertex<T>>* search(T const& data) const {
        if(this->n_vertex == 0)
            return nullptr;

        Node<GraphVertex<T>>* ptr = this->m_vertices.get_head();
        while (ptr) {
            if (key == ptr->get_data().get_head()->get_data())
                return ptr;
            ptr = ptr->get_next();
        } return nullptr;
    }
};