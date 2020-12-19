#ifndef _STACK_HPP_Z_
#define _STACK_HPP_Z_

#include <memory>
#include "stack/Node.hpp"

template<typename T>
class Stack{

private:
    std::shared_ptr<Node<T>> top;
    size_t size;

public:

    Stack():top{nullptr}, size{0}{}
    ~Stack() = default;

    void push(T value);
    void pop();
    T get_top()const;
    size_t get_size()const;
};


#endif //_STACK_HPP_Z_
