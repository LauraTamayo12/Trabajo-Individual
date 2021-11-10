//
// Created by Niña popetas on 08/11/2021.
//

#ifndef EXAMPLE_5_11_LINKEDLIST_H
#define EXAMPLE_5_11_LINKEDLIST_H


#include <vector>
#include "Node.h"

template <class T>
class LinkedList {
public:

    LinkedList();

    bool isEmpty();

    void addNodeFirst( T );

    void addNodeLast( T );

    Node<T>* findNode(std::string ID);

    std::vector<T> getLinkedList();

    T* findInfo(std::string ID);

    T* getObject(int num);

    void addNodeAfterTo(Node<T> *node, T mouse);

    void addNodeBeforeTo(Node<T>*, T );



    virtual ~LinkedList();

private:
    Node<T>* head;

};


#endif //EXAMPLE_5_11_LINKEDLIST_H
