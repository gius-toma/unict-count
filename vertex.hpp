

template <typename T>
class Vertex {
    T m_data;

public:

    Vertex(T const& data) : m_data(data) {}

    void set_data(T const& data) {
        this->m_data = data;
    }

    T get_data() {
        return this->m_data;
    }

    bool operator==(Vertex<T> const& x) {
        return this->m_data == x.m_data;
    }
};