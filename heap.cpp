#include "heap.h"

/**
 * @brief Construct a new Heap object
 * 
 * @param m ary-ness of heap tree (default to 2)
 * @param c binary predicate function/functor that takes two items
 *          as an argument and returns a bool if the first argument has
 *          priority over the second.
 */
Heap::Heap(int m=2, PComparator c = PComparator()) {
  s = 0;
  ary = m;
  comp = c;
}

/**
* @brief Destroy the Heap object
* 
*/
Heap::~Heap();

/**
 * @brief Push an item to the heap
 * 
 * @param item item to heap
 */
Heap::void push(const T& item) {
  s++;
  int counter = 1;
  while (true) {
    if (stuff.count(counter)) {
      a;
    } else {
      stuff[counter] = item;
    }
  }
}

/**
 * @brief Returns the top (priority) item
 * 
 * @return T const& top priority item
 * @throw std::underflow_error if the heap is empty
 */
T const & Heap::top() const;

/**
 * @brief Remove the top priority item
 * 
 * @throw std::underflow_error if the heap is empty
 */
void Heap::pop()

/// returns true if the heap is empty

/**
 * @brief Returns true if the heap is empty
 * 
 */
bool Heap::empty() const {
  return (s == 0);
}

  /**
 * @brief Returns size of the heap
 * 
 */
size_t Heap::size() const {
  return s;
}
