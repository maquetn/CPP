#include "Zombie.hpp"

int main() {
    // Creating zombies on the heap
    Zombie* heapZombie = newZombie("Heap Zombie");
    heapZombie->announce();
    delete heapZombie; // Destroying heap zombie

    // Creating zombies on the stack
    randomChump("Stack Zombie");

    return 0;
}
