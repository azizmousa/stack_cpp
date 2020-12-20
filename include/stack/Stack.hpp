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
    typedef std::shared_ptr<Node<T>> NodePointer;
    Stack():top{nullptr}, size{0}{}
    ~Stack() = default;

    void push(T value);
    void pop();
    T get_top()const;
    size_t get_size()const;
};


/*
 * void Stack<T>::push(T value)
 * insert a value to the stack
*/
template<typename T>
void Stack<T>::push(T value){
    NodePointer node = std::make_shared<Node<T>>(value);
    if(this->size == 0){
        this->top = node;
    }else{
        node->next_ptr = this->top;
        this->top = node;
    }
    this->size++;
}

/*
 * void Stack<T>::pop()
 * remove the first item from the stack
*/
template<typename T>
void Stack<T>::pop(){
    if(this->size != 0){
        this->top = this->top->next_ptr;
        this->size--;
    }
}

/*
 * T Stack<T>::get_top()const
 * return the top item value without remove it
*/
template<typename T>
T Stack<T>::get_top()const{
    return this->top->value;
}

/*
 * size_t Stack<T>::get_size()const
 * return the stack size
*/
template<typename T>
size_t Stack<T>::get_size()const{
    return this->size;
}

#endif //_STACK_HPP_Z_
