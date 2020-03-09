/*
 *
 *  Created by Edward Cruz on 03/04/2020
 *  Lab_06 --- CreateAliens.cpp
 * 
*/

#include "AlienType.hpp"
#include "JupiterianType.cpp"
#include "MartianType.cpp"

int main() {
    MartianType martian = MartianType(4, 3, 9);
    JuperiterianType Juperiterian = JuperiterianType(11, 6, 4);

    martian.displayAlien();
    martian.display();

    Juperiterian.displayAlien();
    Juperiterian.display();
    
    return 0;
}