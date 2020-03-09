/*
 *
 *  Created by Edward Cruz on 03/04/2020
 *  Lab_06 --- MartianType.cpp
 * 
*/

#include "AlienType.hpp"

class MartianType: private AlienType{
    public:
        MartianType();
        
        std::string AlienType::description();
    
};

MartianType::MartianType() {
    eyes = 2;
    arms = 2;
    legs = 2;
}

std::string MartianType::description() {
    std::cout << "\033[2J" << std::endl;
    std::cout << "I have " << eyes << " eyes";
    std::cout << ", " << arms << " arms and ";
    std::cout << legs << " legs.";
}
