#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;

public:
    Zombie();
    ~Zombie();
    void setName(const std::string& name);
    void announce() const;
};

#endif // ZOMBIE_HPP
