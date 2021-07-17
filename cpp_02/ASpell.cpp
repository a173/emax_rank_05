#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(ASpell const &a) {
    *this = a;
}

ASpell &ASpell::operator=(ASpell const &a) {
    name = a.name;
    effects = a.effects;
    return(*this);
}

ASpell::ASpell(std::string const &name, std::string const &effects) : name(name), effects(effects) {}

ASpell::~ASpell() {}

std::string const   &ASpell::getName() const {
    return name;
}

std::string const   &ASpell::getEffects() const {
    return effects;
}

void                ASpell::launch(ATarget const &a) const {
    a.getHitsSpell(*this);
}