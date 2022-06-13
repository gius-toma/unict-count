

template <typename T>
class Graph {
    T* m_verteces;
    int n_vertex;
    bool** m_adj_mat;

public:

    Graph(int n_vertex) : n_vertex(n_vertex) {
        this->m_verteces = new T[n_vertex];
        
        this->m_adj_mat = new bool*[n_vertex];
        for (int i=0; i<n_vertex; ++i)
            this->m_adj_mat[i] = new bool[n_vertex];
        
        zero_adj_mat();
    }

    void zero_adj_mat() {
        for (int i=0; i<n_vertex; ++i)
            for (int j=0; j<n_vertex; ++j)
                this->m_adj_mat[i][j] = false;
    }
};