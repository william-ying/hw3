#include "stack.h"

Stack<T>::Stack() {

}

Stack<T>::~Stack();
bool Stack<T>::empty() const {
    return (Stack.size() == 0);
}
size_t Stack<T>::size() const {
    return (vector<T>::size());
}
void Stack<T>::push(const T& item) {
    vector<T>::push_back(item);
}
void Stack<T>::pop() {
    if (empty()) {
        throw std::underflow_error;
    } else {
        vector<T>::pop_back();
    }
}
const T& Stack<T>::top() const {
    if (empty()) {
        throw std::underflow_error;
    } else {
        return vector<T>::operator[size() - 1];
    }
}
