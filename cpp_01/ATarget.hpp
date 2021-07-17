#ifndef ATARGET
#define ATARGET
#include <iostream>
class ATarget;
#include "ASpell.hpp"

class ATarget {
    private:
        std::string type;
    public:
        ATarget();
        ATarget(ATarget const &);
        ATarget &operator=(ATarget const &);
        ATarget(std::string const &);
        virtual ~ATarget();
        std::string const   &getType() const;
        void                getHitsSpell(ASpell const &a) const;

        virtual ATarget *clone() const = 0;
};

#endif