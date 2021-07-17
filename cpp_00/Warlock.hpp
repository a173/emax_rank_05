#include <iostream>

class Warlock {
    private:
        Warlock();
        Warlock(Warlock const &);
        Warlock &operator=(Warlock const &);
        std::string name;
        std::string title;
    public:
        Warlock(std::string const &, std::string const &);
        ~Warlock();
        std::string const   &getName() const;
        std::string const   &getTitle() const;
        void                setTitle(std::string const &);
        void                introduce() const;
};