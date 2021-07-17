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
    book.learnSpell(a);
}

void                Warlock::forgetSpell(std::string name) {
    book.forgetSpell(name);
}

void                Warlock::launchSpell(std::string name, ATarget const &a) {
    ASpell *temp = book.createSpell(name);
    if (temp)
        temp->launch(a);
}