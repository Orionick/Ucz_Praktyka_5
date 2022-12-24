#include "IntVector.h"

void IntVector::checkIndex(size_t index) {
	if (index > new_size)
		throw std::runtime_error("index is out of range");
}

void IntVector::realloc() {
    arr_capacity *= 2;
    int* newArr = new int[arr_capacity];

    for (size_t i = 0; i < new_size; i++) {
        newArr[i] = memory_ptr[i];
    }
    delete[] memory_ptr;
    memory_ptr = newArr;
}

void IntVector::add(int value) {
    if (new_size >= arr_capacity) {
        realloc();
    }
    memory_ptr[new_size++] = value;
}

int IntVector::get(size_t index) {
    checkIndex(index);
    return memory_ptr[index];
}

void IntVector::insert(size_t index, int value) {
    checkIndex(index);

    new_size++;

    if (new_size >= arr_capacity) {
        realloc();
    }

    for (size_t i = new_size - 1; i > index; i--) {
        memory_ptr[i] = memory_ptr[i - 1];
    }

    memory_ptr[index] = value;
}

void IntVector::replace(size_t index, int value) {
    checkIndex(index);
    memory_ptr[index] = value;
}

void IntVector::remove(size_t index) {
    checkIndex(index);

    for (size_t i = index; i < new_size - 1; i++) {
        memory_ptr[i] = memory_ptr[i + 1];
    }

    new_size -= 1;
}

void IntVector::print() {
    for (size_t i = 0; i < new_size; i++) {
        std::cout << i << ": \t" << memory_ptr[i] << std::endl;
    }
}