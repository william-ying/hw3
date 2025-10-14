#ifndef HEAP_H
#define HEAP_H
#include <functional>
#include <stdexcept>
#include <vector>

template <typename T, typename PComparator = std::less<T> >
class Heap
{
public:
  /**
   * @brief Construct a new Heap object
   * 
   * @param m ary-ness of heap tree (default to 2)
   * @param c binary predicate function/functor that takes two items
   *          as an argument and returns a bool if the first argument has
   *          priority over the second.
   */
  Heap(int m=2, PComparator c = PComparator());

  /**
  * @brief Destroy the Heap object
  * 
  */
  ~Heap();

  /**
   * @brief Push an item to the heap
   * 
   * @param item item to heap
   */
  void push(const T& item);

  /**
   * @brief Returns the top (priority) item
   * 
   * @return T const& top priority item
   * @throw std::underflow_error if the heap is empty
   */
  T const & top() const;

  /**
   * @brief Remove the top priority item
   * 
   * @throw std::underflow_error if the heap is empty
   */
  void pop();

  /// returns true if the heap is empty

  /**
   * @brief Returns true if the heap is empty
   * 
   */
  bool empty() const;

    /**
   * @brief Returns size of the heap
   * 
   */
  size_t size() const;

private:
  /// Add whatever helper functions and data members you need below
  std::vector<T> stuff;
  int ary;
  PComparator comp;


};

// Add implementation of member functions here


// We will start top() for you to handle the case of 
// calling top on an empty heap
template <typename T, typename PComparator>
T const & Heap<T,PComparator>::top() const
{
  // Here we use exceptions to handle the case of trying
  // to access the top element of an empty heap
  if(empty()){
    // ================================
    // throw the appropriate exception
    // ================================
    throw std::underflow_error;

  }
  // If we get here we know the heap has at least 1 item
  // Add code to return the top element
  return stuff[0];
  


}


// We will start pop() for you to handle the case of 
// calling top on an empty heap
template <typename T, typename PComparator>
void Heap<T,PComparator>::pop()
{
  if(empty()){
    // ================================
    // throw the appropriate exception
    // ================================
    throw std::underflow_error;

  }
  
  T temp = stuff[0];
  stuff[0] = stuff[stuff.size() - 1];
  stuff[stuff.size() - 1] = temp;
  stuff.pop_back();
  int i = 1;
  bool done = true;
  while (i < stuff.size() - 1) {
    for (int j = 0; j < ary; j++) {
      if ((i * ary) + j >= stuff.size()) {
        break;
      }
      if (comp(stuff[i - 1], stuff[(i * ary) + j - 1])) {
        temp = stuff[i - 1];
        stuff[i - 1] = stuff[(i * ary) + j - 1];
        stuff[(i * ary) + j - 1] = temp;
        i = (i * ary) + j;
        done = false;
        break;
      }
    }
    if (done) {
      break;
    }
  }


}



#endif

