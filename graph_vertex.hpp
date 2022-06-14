#pragma once

#include "vertex.hpp"
#include "unict-list/list.h"

template <typename T>
class Graph_List : public List {
public:
    Graph_List(T const& data) : List() {
        List::insert(data);
    }

    friend std::ostream& operator<<(std::ostream& out, Graph_List<T> gl) {
        out << "Graph List with key" << gl.HEAD->get_data() << '\n'
            << "\tAdjacency List: ";
        Node<T>* ptr = gl.HEAD;
        while (ptr) {
            out << " -> " << ptr->get_data();
            ptr = ptr->get_next();
        } return out;
    }
};