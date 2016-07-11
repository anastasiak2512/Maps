//
// Created by AK on 27/06/16.
//

#ifndef DISTANCE_H
#define DISTANCE_H

#include <iostream>
using namespace std;


/// @brief Distance class
class Distance
{
private:
    int feet;             // 0 to infinite
    int inches;           // 0 to 12
public:
    Distance() : feet(0), inches(0) {}
    Distance(int feet, int inches) : feet(feet), inches(inches) {}

    bool operator<(const Distance& d)
    {
        if(feet < d.feet)
            return true;
        return feet == d.feet && inches < d.inches;
    }

};








#endif //DISTANCE_H
