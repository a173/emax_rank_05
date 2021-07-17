#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::SpellBook(SpellBook const &a) {
    *this = a;
}

SpellBook   &SpellBook::operator=(SpellBook const &a) {
    arr = a.arr;
    return (*this);
}


SpellBook::~SpellBook() {
    std::vector<ASpell *>::iterator begin = arr.begin();
    std::vector<ASpell *>::iterator end = arr.end();

    while (begin != end) {
        delete *begin;
        ++begin;
    }
    arr.clear();
}

void    SpellBook::learnSpell(ASpell *a) {
    std::vector<ASpell *>::iterator begin = arr.begin();
    std::vector<ASpell *>::iterator end = arr.end();

    if (a) {
        while (begin != end)
        {
            if ((*begin)->getName() == a->getName())
                return ;
            ++begin;
        }
        arr.push_back(a->clone());
    }
}

void    SpellBook::forgetSpell(std::string const &name) {
    std::vector<ASpell *>::iterator begin = arr.begin();
    std::vector<ASpell *>::iterator end = arr.end();
    while (begin != end)
    {
        if ((*begin)->getName() == name) {
            delete *begin;
            arr.erase(begin);
            return ;
        }
        ++begin;
    }
}

ASpell* SpellBook::createSpell(std::string const &name) {
    std::vector<ASpell *>::iterator begin = arr.begin();
    std::vector<ASpell *>::iterator end = arr.end();
    while (begin != end) {
        if ((*begin)->getName() == name)
            return (*begin);
        ++begin;
    }
    return NULL;
}