#ifndef POLYMORPH
#define POLYMORPH
#include <iostream>
#include "ASpell.hpp"

class Polymorph : public ASpell {
    public:
        Polymorph();
        ~Polymorph();

        virtual ASpell *clone() const;
};

#endif