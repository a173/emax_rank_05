#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(ATarget const &a) {
    *this = a;
}

ATarget &ATarget::operator=(ATarget const &a) {
    type = a.type;
    return *this;
}

ATarget::ATarget(std::string const &type) : type(type) {}

ATarget::~ATarget() {}

std::string const   &ATarget::getType() const {
    return type;
}

void                ATarget::getHitsSpell(ASpell const &a) const {
    std::cout << type << " has been " << a.getEffects() << "!" << std::endl;
}