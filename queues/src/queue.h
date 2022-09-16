#pragma once

#define SIZE 1024

namespace Quant {
template <class T>
class Queue {
  public:
    Queue();
    void push(const T& entry);
    // https://en.cppreference.com/w/cpp/container/queue
    // @TODO: Complete the following:
    // front
    // back
    // empty
    // size
    // emplace
    // pop
    // swap
  private:
    // What privates do you need?
};
}

#include "queue.hpp"