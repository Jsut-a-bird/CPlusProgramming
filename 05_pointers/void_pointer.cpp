#include <iostream>

int main(void){
    //casting from one type to another
    //static_cast<new_type>(expression);

    int number = 21;
    double pi = 3.1415;

    void* ptr = nullptr;

    ptr = &number;

    //dereference ptr as a integer pointer
    std::cout <<"Int value " << *static_cast<int*>(ptr) << std::endl;

    ptr = &pi;

    std::cout <<"Double value " << *static_cast<double*>(ptr) << std::endl;
    
}