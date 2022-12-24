#include <iostream>

using namespace std;

class IntVector {
private:
	int* memory_ptr; // указатель на динамически выделяемую память для нашего массива
	size_t new_size; // количество элементов, добавляемых в массив
	size_t arr_capacity; // настоящая вместимость нашего массива
	void checkIndex(size_t index); // метод, выбрасывающий исключение если индекс больше или равен количеству добавленных в массив элементов
	void realloc(); // увеличение вместимости массива, выделение для него новой памяти и переноска всех прежних элементов
public:
	IntVector(size_t capacity = 8) : memory_ptr(new int[capacity]), new_size(0), arr_capacity(capacity) {
		if (capacity == 0) {
			throw std::runtime_error("There is no possible to make 0-array");
		}
	}
	~IntVector() { delete[] memory_ptr; }
	void add(int value); //добавляет элемент в конец массива
	int get(size_t index); //возвращение элемента по его индексу
	void insert(size_t index, int value); //помещение элемента по заданному индексу(элементы справа смещаются впаро)
	void replace(size_t index, int value); //замена элемента по индексу
	void remove(size_t index); //удаление элемента массива по заданному индексу
	size_t size() { return new_size; }
	size_t capacity() { return arr_capacity; }
	void print();
};
