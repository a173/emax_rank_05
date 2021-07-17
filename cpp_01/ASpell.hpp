#ifndef ASPELL
#define ASPELL
#include <iostream>
class ASpell;
#include "ATarget.hpp"

class ASpell {
    private:
        std::string name;
        std::string effects;
    public:
        ASpell();
        ASpell(ASpell const &);
        ASpell &operator=(ASpell const &);
        ASpell(std::string const &, std::string const &);
        virtual ~ASpell();
        std::string const   &getName() const;
        std::string const   &getEffects() const;
        void                launch(ATarget const &a) const;

        virtual ASpell *clone() const = 0;
};

#endif