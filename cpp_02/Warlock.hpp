#include <iostream>
// #include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
    private:
        Warlock();
        Warlock(Warlock const &);
        Warlock &operator=(Warlock const &);
        std::string name;
        std::string title;

        // std::vector<ASpell *> arr;
        SpellBook book;
    public:
        Warlock(std::string const &, std::string const &);
        ~Warlock();
        std::string const   &getName() const;
        std::string const   &getTitle() const;
        void                setTitle(std::string const &);
        void                introduce() const;

        void                learnSpell(ASpell *);
        void                forgetSpell(std::string);
        void                launchSpell(std::string, ATarget const &);
};