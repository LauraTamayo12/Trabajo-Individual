//
// Created by Niña popetas on 08/11/2021.
//

#ifndef EXAMPLE_5_11_NODE_H
#define EXAMPLE_5_11_NODE_H

#include <cstdlib>

template <class T> class LinkedList;

template <class T>
class Node {

    friend class LinkedList<T>;

public:
    Node(T info) : info(info) {
        next = NULL;
    }

    virtual ~Node() {

    }

private:
    T info;
    Node<T>* next;
};

#endif //EXAMPLE_5_11_NODE_H
