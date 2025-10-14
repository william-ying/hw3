#include "stack.h"

    Stack::Stack();
    Stack::~Stack();
    bool Stack::empty() const;
    size_t Stack::size() const;
    void Stack::push(const T& item);
    void Stack::pop();  // throws std::underflow_error if empty
    const T& Stack::top() const;
