#include <sstream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        std::stringstream ss;
        ss << i + 1;
        horde[i].set_name(name + " " + ss.str());
        horde[i].announce();
    }
    return horde; // Returning pointer to the first element of the array
}
