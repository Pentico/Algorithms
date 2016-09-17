#include <iostream>
#include "heroes.cpp" // checking the namespace definition.

int dataEgnore(int);

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << Heroes::H; // using namespace Heroes
    std::cout << dataEgnore(10) <<std::endl;
    return 0;
}


//////////////// functions definitions ////////

int dataEgnore( int tempNumb ){

    if(tempNumb == 0){
        return 0;
    }else{
        return dataEgnore(tempNumb-1) +tempNumb;
    }

    return NULL;
}

