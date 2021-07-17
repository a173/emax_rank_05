#ifndef SPELLBOOK
#define SPELLBOOK
#include <iostream>
#include "ASpell.hpp"
#include <vector>

class SpellBook {
    public:
        SpellBook();
        SpellBook(SpellBook const &);
        SpellBook &operator=(SpellBook const &);
        ~SpellBook();

        void    learnSpell(ASpell *);
        void    forgetSpell(std::string const &);
        ASpell  *createSpell(std::string const &);
    private:
        std::vector<ASpell *> arr;
};

#endif