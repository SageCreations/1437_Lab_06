/*
 *
 *  Created by Edward Cruz on 03/04/2020
 *  Lab_06 --- JupitrianType.cpp
 * 
*/

#include "AlienType.hpp"

class JuperiterianType: private AlienType {
    public: 
        JuperiterianType();
        std::string description();
};

JuperiterianType::JuperiterianType() {
    eyes = 2;
    arms = 2;
    legs = 2;
}

std::string JuperiterianType::description() {
    std::cout << "\033[2J" << std::endl;
    std::cout << "I have " << eyes << " eyes";
    std::cout << ", " << arms << " arms and ";
    std::cout << legs << " legs.";
}


