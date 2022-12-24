#include "IntVector.h"

int main() {
    IntVector intVector(1);
    intVector.add(1);
    intVector.add(3);
    intVector.add(-1);
    intVector.add(5);

    intVector.insert(1, 800);
    intVector.remove(intVector.size() - 1);
    intVector.insert(intVector.size() - 1, 666);

    intVector.print();

    return 0;
}