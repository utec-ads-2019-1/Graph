#ifndef EDGE_H
#define EDGE_H

template <typename G>
class Edge {
    typedef typename G::E E;
    typedef typename G::node node;

    E data;
    node* nodes[2];
};

#endif