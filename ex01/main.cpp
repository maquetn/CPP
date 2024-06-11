#include "PhoneBook.hpp"
#include <iostream>
#include <limits>

int main() {
    PhoneBook phoneBook;
    std::string input;

    while(true) {
        std::cout << "\033[1;32mEnter :     ADD   |   SEARCH   |   EXIT\033[0m\n";
        
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
        size_t start = input.find_first_not_of(" \t");
        if (start == std::string::npos) {
            std::cout << "Invalid input. Please try again." << std::endl;
            continue;
        }

        size_t end = input.find(' ', start);
        std::string command = input.substr(start, end - start);

        if (command == "ADD") {
            std::string firstName, lastName, nickname, phoneNumber, secret;
            std::cout << "Enter first name: ";
            std::cin >> firstName;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
            std::cout << "Enter last name: ";
            std::cin >> lastName;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Enter nickname: ";
            std::cin >> nickname;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Enter phone number: ";
            std::cin >> phoneNumber;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Enter secret: ";
            std::cin >> secret;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            Contact newContact(firstName, lastName, nickname, phoneNumber, secret);
            phoneBook.addContact(newContact);
        } else if (command == "SEARCH") {
            phoneBook.listContacts();
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }

    return 0;
}
