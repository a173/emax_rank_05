#ifndef BRICKWALL
#define BRICKWALL
#include <iostream>
#include "ATarget.hpp"

class BrickWall: public ATarget {
    public:
        BrickWall();
        ~BrickWall();

        virtual ATarget *clone() const;
};

#endif