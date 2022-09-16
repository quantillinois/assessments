/**
 * @file list.cpp
 * Queue
 */

#include <iostream>
namespace Quant {
template <class T>
Queue<T>::Queue() {
    // @TODO: Complete this function
    std::cout << "I am in Queue!" << std::endl; 
}

template <typename T>
void Queue<T>::push(const T& entry) {
    // @TODO: Complete this function
    std::cout << "I put entry (" << entry.first << ", " << entry.second << ") on queue" << std::endl;
    return;
}
}