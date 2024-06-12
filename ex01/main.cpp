#include "PhoneBook.hpp"
#include <iostream>
#include <limits>

int main() {
    PhoneBook phoneBook;
    std::string input;

    std::cout << "\033[1;32mEnter :     ADD   |   SEARCH   |   EXIT\033[0m\n";
    while(!std::cin.eof()){
        if (!std::getline(std::cin, input)) {
            if (std::cin.eof()) {
                std::cout << "\nExiting program. (EOF)\n";
                break;
            } else {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input. Please try again.\n";
                continue;
            }
        }

        // Find first non-space
        size_t start = input.find_first_not_of(" \n\t");
        if (start == std::string::npos) {
            continue;
        }

        size_t end = input.find(' ', start);
        std::string command = input.substr(start, end - start);

        if (command == "ADD") {
            std::string firstName, lastName, nickname, phoneNumber, secret;
            std::cout << "Enter first name: ";
            std::cin >> firstName;
            std::cout << "Enter last name: ";
            std::cin >> lastName;
            std::cout << "Enter nickname: ";
            std::cin >> nickname;
            std::cout << "Enter phone number: ";
            std::cin >> phoneNumber;
            std::cout << "Enter secret: ";
            std::cin >> secret;

            Contact newContact(firstName, lastName, nickname, phoneNumber, secret);
            phoneBook.addContact(newContact);
            std::cout << "\033[1;32mEnter :     ADD   |   SEARCH   |   EXIT\033[0m\n";
        } else if (command == "SEARCH") {
            phoneBook.listContacts();
            std::cout << "\033[1;32mEnter :     ADD   |   SEARCH   |   EXIT\033[0m\n";
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }

    return 0;
}
