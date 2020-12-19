#ifndef _NODE_HPP
#define _NODE_HPP

#include <memory>

template<typename T>
struct Node
{
    std::shared_ptr<Node<T>> next_ptr;
    T value;

    Node(T value): next_ptr{nullptr}, previous_ptr{nullptr}, value{value}{}
    ~Node(){}
};


#endif