#include "Zombie.hpp"

int main() {
    // Creating on the heap
    Zombie* heapZombie = newZombie("Heap Zombie");
    heapZombie->announce();
    delete heapZombie;

    // Creating on the stack (implicitly deleted)
    randomChump("Stack Zombie");

    return 0;
}
