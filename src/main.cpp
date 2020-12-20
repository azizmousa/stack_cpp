#include <iostream>

#include "stack/Stack.hpp"

int main(int argc, char *argv[]){
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.pop();
    std::cout << s.get_top() << std::endl;
    std::cout << s.get_size() << std::endl;
    return 0;
}