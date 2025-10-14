#include "stack.h"

Stack<T>::Stack() {

}

Stack<T>::~Stack();
template <typename T>
bool Stack<T>::empty() const {
    return (Stack.size() == 0);
}
template <typename T>
size_t Stack<T>::size() const {
    return (vector<T>::size());
}
template <typename T>
void Stack<T>::push(const T& item) {
    vector<T>::push_back(item);
}
template <typename T>
void Stack<T>::pop() {
    if (empty()) {
        throw std::underflow_error;
    } else {
        vector<T>::pop_back();
    }
}
template <typename T>
const T& Stack<T>::top() const {
    if (empty()) {
        throw std::underflow_error;
    } else {
        return vector<T>::operator[size() - 1];
    }
}
