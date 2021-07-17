#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::Warlock(std::string const &name, std::string const &title) : name(name), title(title) {
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(Warlock const &a) {
    *this = a;
}

Warlock::~Warlock() {
    std::cout << this->name << ": My job here is done!" << std::endl;
}

Warlock &   Warlock::operator=(Warlock const &a) {
    name = a.name;
    title = a.title;
    return *this;
}

std::string const   &Warlock::getName() const {
    return name;
}

std::string const   &Warlock::getTitle() const {
    return title;
}

void                Warlock::setTitle(std::string const &a) {
    title = a;
}

void        Warlock::introduce() const {
    std::cout << name << ": I am " << name << ", " << title <<std::endl;
}

void                Warlock::learnSpell(ASpell *a) {
    std::vector<ASpell *>::iterator it_begin = arr.begin();
    std::vector<ASpell *>::iterator it_end = arr.end();
    if (a) {
        while (it_begin != it_end) {
            if ((*it_begin)->getName() == a->getName())
                return ;
            ++it_begin;
        }
        arr.push_back(a->clone());
    }
}

void                Warlock::forgetSpell(std::string name) {
    std::vector<ASpell *>::iterator it_begin = arr.begin();
    std::vector<ASpell *>::iterator it_end = arr.end();
    while (it_begin != it_end){
        if ((*it_begin)->getName() == name) {  
            delete *it_begin;  
            arr.erase(it_begin);
            return ;
        }
        ++it_begin;
    }
}

void                Warlock::launchSpell(std::string name, ATarget const &a) {
    std::vector<ASpell *>::iterator it_begin = arr.begin();
    std::vector<ASpell *>::iterator it_end = arr.end();
    while (it_begin != it_end) {
        if ((*it_begin)->getName() == name) {
            (*it_begin)->launch(a);
            return ;
        }
        ++it_begin;
    }
}