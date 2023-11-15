#include<cstddef>
// implement heap operations
// as discussed in class

// find_min_child -- impementation given
// returns the index of the child with the min value, otherwise
// returns 0.
template<typename ArrayType>
std::size_t find_min_child(ArrayType & a, std::size_t index) {
    std::size_t left_child_index = (index + 1) * 2 - 1;
    std::size_t right_child_index = left_child_index + 1;
    if (left_child_index >= a.size()) {  // am at a leaf
        return 0;
    }
    std::size_t min_index = index;
    if (a[left_child_index] < a[index]) {
        min_index = left_child_index;
    }
    if (right_child_index < a.size()) { // check that right child exist
        if (a[right_child_index] < a[min_index]) {
            min_index = right_child_index;
        }
    }
    if (min_index != index) {
        return min_index;
    }
    return 0;
}

// returns min value in heap
template<typename ArrayType>
int peek(ArrayType& a) {
    return a[0];
}

// bubble up algorithm discussed in class to
// restore heap property after insert
template<typename ArrayType>
void bubble_up(ArrayType& a, std::size_t index) {
    //TO DO
    
}

// insert -- adds item to end of array
// need to call bubble_up to restore heap
template<typename ArrayType>
void insert(ArrayType& a, int item) {
    //TO DO
}

// assumption -- have a semi-heap rooted at index
// rebuild heap from this index
template<typename ArrayType>
void rebuild_min_heap(ArrayType& a, std::size_t index) {
    //TO DO
}

// removes the min value
// move last value in the array to the top
// need to  rebuild heap from the top 
template<typename ArrayType>
void remove(ArrayType& a) {
     //To Do
}

// make_min_heap -- takes array of values and
// builds a heap by rebuilding the heap from 
// bottom up
// TODO
template<typename ArrayType>
void make_min_heap(ArrayType& a) {
    //To Do
}

// check to see if the array is a valid heap
template<typename ArrayType>
bool check_min_heap(ArrayType& a) {
    std::size_t index = (a.size() / 2) - 1;
    for (std::size_t i = 0; i < a.size(); i++) {
        if (find_min_child(a, i) != 0) return false;
    }
    return true;
}