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
  stuff.push_back(item);
  T temp;
  for (int i = stuff.size(); i > 1; i /= ary) {
    if (comp(stuff[i - 1], stuff[(i / ary) - 1])) {
      temp = stuff[i - 1];
      stuff[i - 1] = stuff[(i / ary) - 1];
      stuff[(i / ary) - 1] = temp;
    } else {
      break;
    }
  }
}



/// returns true if the heap is empty

/**
 * @brief Returns true if the heap is empty
 * 
 */
bool Heap::empty() const {
  return (stuff.empty());
}

  /**
 * @brief Returns size of the heap
 * 
 */
size_t Heap::size() const {
  return stuff.size();
}
