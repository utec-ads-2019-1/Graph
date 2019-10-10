#ifndef NODE_H
#define NODE_H

template <typename G>
class Node {
    typedef typename G::N N;
    typedef typename G::EdgeSeq EdgeSeq;

    N data;
    EdgeSeq edges;
    double x, y;
};

#endif