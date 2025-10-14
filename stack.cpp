#include "stack.h"

Stack::Stack() {

}

Stack::~Stack();

bool Stack::empty() const {
    return (Stack.size() == 0);
}

size_t Stack::size() const {
    return (vector<T>::size());
}

void Stack::push(const T& item) {
    vector<T>::push_back(item);
}

void Stack::pop() {
    if (empty()) {
        throw std::underflow_error;
    } else {
        vector<T>::pop_back();
    }
}

const T& Stack::top() const {
    if (empty()) {
        throw std::underflow_error;
    } else {
        return vector<T>::operator[size() - 1];
    }
}
