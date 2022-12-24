#include <iostream>

using namespace std;

class IntVector {
private:
	int* memory_ptr; // ��������� �� ����������� ���������� ������ ��� ������ �������
	size_t new_size; // ���������� ���������, ����������� � ������
	size_t arr_capacity; // ��������� ����������� ������ �������
	void checkIndex(size_t index); // �����, ������������� ���������� ���� ������ ������ ��� ����� ���������� ����������� � ������ ���������
	void realloc(); // ���������� ����������� �������, ��������� ��� ���� ����� ������ � ��������� ���� ������� ���������
public:
	IntVector(size_t capacity = 8) : memory_ptr(new int[capacity]), new_size(0), arr_capacity(capacity) {
		if (capacity == 0) {
			throw std::runtime_error("There is no possible to make 0-array");
		}
	}
	~IntVector() { delete[] memory_ptr; }
	void add(int value); //��������� ������� � ����� �������
	int get(size_t index); //����������� �������� �� ��� �������
	void insert(size_t index, int value); //��������� �������� �� ��������� �������(�������� ������ ��������� �����)
	void replace(size_t index, int value); //������ �������� �� �������
	void remove(size_t index); //�������� �������� ������� �� ��������� �������
	size_t size() { return new_size; }
	size_t capacity() { return arr_capacity; }
	void print();
};
