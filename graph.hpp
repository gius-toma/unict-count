

template <typename T>
class Graph {
    T* m_verteces;
    bool** m_adj_mat;

    std::size_t max_vertex;
    std::size_t n_vertex;

public:

    Graph(std::size_t max_vertex) : max_vertex(max_vertex) {
        this->m_verteces = new T[max_vertex];
        
        this->m_adj_mat = new bool*[max_vertex];
        for (std::size_t i=0; i<max_vertex; ++i)
            this->m_adj_mat[i] = new bool[max_vertex];
        
        zero_adj_mat();
    }

    void zero_adj_mat() {
        for (std::size_t i=0; i<max_vertex; ++i)
            for (std::size_t j=0; j<max_vertex; ++j)
                this->m_adj_mat[i][j] = false;
    }
};