#include <iostream>

void countdown(int n);
void countup(int n);
int power(int base, int exp);
void print_binary(int num);

int main(void){
    //countdown(10);
    //countup(10);

    print_binary(64);
    return 0;
}


void countdown(int n){
    //Base case
    if (n <= 0){
        std::cout << "n n is " << n << "Reached the base case/n";
        return;
    }
    std::cout<< n;
    countdown(n-1);
    
}

void countup(int n){
    //Base case
    if (n <= 0){
        std::cout << "/n n is " << n << "Reached the base case/n";
        return;
    }
    countup(n-1);
    std::cout<< n;
    
}

int power(int base, int exp){
    if (exp == 0) {
        printf("I am power(%d,%d). I know the answer is 1\n\n", base, exp);
        return 1;
    }

    printf("I am power(%d,%d),", base, exp);
    printf("I remember %d and ask power(%d,%d) for help!/n", base, base, exp-1);
    int help = power(base, exp-1);
    printf("I am power(%d,%d), base, exp/n", base, exp);
    printf("power(%d, %d) returned me %d, \n", base, exp-1, help );
    printf("I will do %d * %d = %d and return the result\n", base, help, base*help);
    return base * help;
}

void print_binary(int num){
    //base case
    if (num == 0){
        return;

    }
    print_binary(num/2);
    std::cout << num % 2;
}