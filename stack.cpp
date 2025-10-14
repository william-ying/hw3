#include "stack.h"

Stack::Stack() {

}

Stack::~Stack();

bool Stack::empty() const {
    return (Stack.size() == 0);
}
template <typename T>
size_t Stack::size() const {
    return (vector<T>::size());
}
template <typename T>
void Stack::push(const T& item) {
    vector<T>::push_back(item);
}
template <typename T>
void Stack::pop() {
    if (empty()) {
        throw std::underflow_error;
    } else {
        vector<T>::pop_back();
    }
}
template <typename T>
const T& Stack::top() const {
    if (empty()) {
        throw std::underflow_error;
    } else {
        return vector<T>::operator[size() - 1];
    }
}
