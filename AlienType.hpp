/*
 *
 *  Created by Edward Cruz on 03/04/2020
 *  Lab_06 --- AlienType.hpp
 * 
*/

#ifndef ALIENTYPE_HPP
#define ALIENTYPE_HPP

#include <iostream>
#include <string>

class AlienType
{
    protected:
        int eyes;
        int arms;
        int legs;
    public:
        //output method
        std::string description();
};



#endif
