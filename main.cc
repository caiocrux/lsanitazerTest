#include <iostream>

void leakingFunction() {
    // Allocating memory without freeing it
    int* array = new int[10];
    // Uncomment the line below to fix the memory leak
    // delete[] array;
}

int main() {
    // Allocate some memory in the main function
    char* charArray = new char[20];

    // Call a function that leaks memory
    leakingFunction();

    // Uncomment the line below to fix the memory leak
    // delete[] charArray;

    return 0;
}
