
#include "PhoneBook.hpp"

int main() {
    Contact contacts[8];
    int count = 0;
    std::string input;

    while(1) {
        std::cout << "\033[1;32mEnter :     ADD   |   SEARCH   |   EXIT\033[0m\n";
        std::cin >> input;

        if (input == "ADD")
            addContact(contacts, count);
        else if (input == "SEARCH")
            searchContact(contacts, count);
        else if (input == "EXIT")
            break;
        else if (!(std::cin >> input)) {
            // std::cin.clear();
            break;
        }
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }
}
