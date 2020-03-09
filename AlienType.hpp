/*
 *
 *  Created by Edward Cruz on 03/04/2020
 *  Lab_06 --- AlienType.hpp
 * 
*/

#ifndef ALIENTYPE_HPP
#define ALIENTYPE_HPP

#include <iostream>

class AlienType
{
    protected:
        int eyes;
        int arms;
        int legs;
    public:
        //output method
        void display() {
            //std::cout << "\033[2J" << std::endl;
            std::cout << "I have " << eyes << " eyes";
            std::cout << ", " << arms << " arms and ";
            std::cout << legs << " legs.\n\n\n";
        }
};



#endif
