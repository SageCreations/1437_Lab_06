/*
 *
 *  Created by Edward Cruz on 03/04/2020
 *  Lab_06 --- MartianType.cpp
 * 
*/

#include "AlienType.hpp"

class MartianType: public AlienType{
    public:
        MartianType();
        MartianType(int, int, int);
        void displayAlien();
};

MartianType::MartianType() {
    eyes = 2;
    arms = 2;
    legs = 2;
}

MartianType::MartianType(int e, int a, int l) {
    eyes = e;
    arms = a;
    legs = l;
}

void MartianType::displayAlien() {
    std::cout << "I am a Martian and ";
}


