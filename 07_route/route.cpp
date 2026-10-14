#include <iostream>
#include <string>


//create a route structure
struct Route {
    //constructor is function called when object is created
    //constructor doesn't have the return type

    Route(const std::string& src, const std::string& dest, int len){
        source = src;
        destination = dest;
        length = len;
    }

    void print() {
        std::cout << "{ " << source << " -> " << destination << ", " << length << "}\n";
    }
private://access specifier
    std::string source;
    std::string destination;
    int length;
};

int main(void){

    //create a route object
    Route trip("Lakeland", "Orlando", 40);
    /*
    trip.source = "Lakeland";
    trip.source = "Orlando";
    trip.length = 40;
    */

    trip.print();

    Route summer_trip("Lakeland" , "Detroit", 1200);
    /*
    summer_trip.source = "Lakeland";
    summer_trip.destination = "New York";
    */

   summer_trip.print();



    return 0;
}