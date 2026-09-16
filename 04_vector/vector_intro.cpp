#include <iostream>
#include <vector>

void printv(const std::vector<int>& v);

int main(void){
    std::vector<int> v1;

    //create a vector with size and default values
    std::vector<int> v2(10,1);

    //create a vector using another vector
    std::vector<int> v3(v2);

    std::vector<int> v4 = {10,2,43,12,3242};
    
    printv(v2);
    printv(v4);

    v4.pop_back();
    v4.push_back(777);

    //Iterator points to certain location
    //begin() points to the first element
    //end() points to the location after the last

    return 0;
}

void printv(const std::vector<int>& v){
    for (int a : v){
        std::cout << a << ",";
    }
}

