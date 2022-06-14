#pragma once

#include <algorithm>

template <typename T>
class Graph {
    T** m_verteces;
    bool** m_adj_mat;

    std::size_t max_vertex;
    std::size_t n_vertex;

public:

    Graph(std::size_t max_vertex) : max_vertex(max_vertex) {
        this->m_verteces = new T[max_vertex];
        
        this->m_adj_mat = new bool*[max_vertex];
        for (std::size_t i=0; i<max_vertex; ++i){
            this->m_adj_mat[i] = new bool[max_vertex];
            for (std::size_t j=0; j<max_vertex; ++j)
                std::fill_n(m_adj_mat[i], max_vertex, 0);
        }
    }

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
        std::size_t i = search(data0);
        std::size_t j = search(data1);

        if(i!=-1 && j != -1)
            m_adj_mat[i][j] = true;
        else if (i == -1)
            std::cerr << "There is no vertex(data0)\n";
        else
            std::cerr << "There is no vertex(data1)\n";
    }

    int search(T const& data) const {
        if(this->n_vertex == 0)
            return -1;

        for (std::size_t i=0; i<n_vertex; ++i)
            if(m_verteces[i]->get_data() == data)
                return i;
        return -1;
    }

    Vertex<T>* operator[] (std::size_t index) {
        if (index < 0 && index >= n_vertex)
            throw std::out_of_range("Index is out of range");
        return m_verteces[index];
    }
};