#include <iostream>
#include <string>
#include <iomanip>

//define data type
struct Lecture{
    std::string title;
    int duration;

    //create method for the structure
    void print(){
        std::cout << std::setw(15) << std::left << title << " " << duration;
    };
};

void printLecture(const Lecture& l);

int main(void){

    Lecture oop;//create a object of type

    oop.title = "Classes and Objects";
    oop.duration = 50*60;

    std::cout <<oop.title << " " << oop.duration;

    Lecture  math {"Graphs",75*60};
    printLecture(math);

    return 0;
}

void printLecture(const Lecture& l){
    std::cout << std::setw(15) << std::left << l.title << " " << l.duration;
}