#include <iostream>

void printArr(const int* arr, int size);
void doubleArr(int* arr, int size);
int* doubleArrNew(const int* arr, int size);//return a new array with doubled values

int main(void) {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};

    printArr(arr, SIZE);
    doubleArr(arr,SIZE);

    int* new_arr = doubleArrNew(arr,SIZE);
    printArr(new_arr,SIZE);

    return 0;
}

void printArr(const int* arr, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

void doubleArr(int* arr, int size){
    for(int i = 0; i < size; i++){
        arr[i]*=2;
    }
    printArr(arr,size);
}

int* doubleArrNew(const int* arr, int size){
    new int new_arr[size];
    for(int i = 0; i < size; i++){
        new_arr[i] = 2*arr[i];
    }
    return new_arr;
}