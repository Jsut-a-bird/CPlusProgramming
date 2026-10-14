#include <iostream>

//function pHL
//prints a line of dashes
void pHL();

//function biter
//interprets integers by reference as bits and carries over binary
void biter(int& X0, int& X1);


struct row{
    int A1 = 0;
    int A0 = 0;
    int B1 = 0;
    int B0 = 0;
    int S0 = 0;
    int S1 = 0;
    int S2 = 0; //not needed but third bit for future reference

    void increment(){
        B0++;
        biter(B0,B1);
        biter(B1,A0);
        biter(A0,A1);
    }

    void calc(){
        S0 = A0+B0;
        S1 = A1+B1;

        //binary
        biter(S0,S1);
        biter(S1,S2);
    }

    bool cap(){return (A1==2)?true:false;}
};



int main(void){
    row table1;
    //print table header
    pHL();
    std::cout << "| A1 | A0 | B1 | B0 | S1 | S0 |"<< std::endl;
    pHL();

    while(!table1.cap()){
        //calculate outputs
        table1.calc();
        //print row for table, then increment
        printf("|  %d |  %d |  %d |  %d |  %d |  %d |\n",table1.A1,table1.A0,table1.B1,table1.B0,table1.S1,table1.S0);
        pHL();
        
        table1.increment();
    }


}


void pHL(){std::cout << "-------------------------------"<< std::endl;}

void biter(int& X0, int& X1){if (X0/2==1){X0-=2;X1++;}}