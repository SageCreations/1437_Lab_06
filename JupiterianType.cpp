/*
 *
 *  Created by Edward Cruz on 03/04/2020
 *  Lab_06 --- JupitrianType.cpp
 * 
*/

#include "AlienType.hpp"

class JuperiterianType: public AlienType {
    public: 
        JuperiterianType();
        JuperiterianType(int, int, int);
        void displayAlien();
};

JuperiterianType::JuperiterianType() {
    eyes = 2;
    arms = 2;
    legs = 2;
}

JuperiterianType::JuperiterianType(int e, int a, int l) {
    eyes = e;
    arms = a;
    legs = l;
}

void JuperiterianType::displayAlien() {
    std::cout << "I am a Juperiterian and ";
}




