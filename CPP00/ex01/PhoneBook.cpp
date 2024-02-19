#include "PhoneBook.hpp"

void addContact(Contact contacts[], int& count) {
    if (count < 8) {
        std::cout << "Enter first name: ";
        std::cin >> contacts[count].firstName;
        std::cout << "Enter last name: ";
        std::cin >> contacts[count].lastName;
        std::cout << "Enter nickname: ";
        std::cin >> contacts[count].nickname;
        std::cout << "Enter phone number: ";
        std::cin >> contacts[count].phoneNumber;
        std::cout << "Enter secret: ";
        std::cin >> contacts[count].secret;
        
        count++;
    } else {
        std::cout << "Maximum contacts reached. Oldest contact will be replaced." << std::endl;
        for (int i = 0; i < 7; ++i) {
            contacts[i] = contacts[i + 1];
        }

        std::cout << "Enter first name: ";
        std::cin >> contacts[7].firstName;
        std::cout << "Enter last name: ";
        std::cin >> contacts[7].lastName;
        std::cout << "Enter nickname: ";
        std::cin >> contacts[7].nickname;
        std::cout << "Enter phone number: ";
        std::cin >> contacts[7].phoneNumber;
        std::cout << "Enter secret: ";
        std::cin >> contacts[7].secret;
    }
}

void searchContact(Contact contacts[], int& count) {
    if (count == 0) {
        std::cout << "No contacts available." << std::endl;
        return;
    }

    std::cout << "\n\033[1;32mContacts list:\n" << std::endl;
    for (int i = 0; i < count; ++i) {
        std::cout << "\nContact " << i + 1 << ":\033[0m" << std::endl;
        std::cout << "First Name: " << contacts[i].firstName << std::endl;
        std::cout << "Last Name: " << contacts[i].lastName << std::endl;
        std::cout << "Nickname: " << contacts[i].nickname << std::endl;
        std::cout << "Phone Number: " << contacts[i].phoneNumber << std::endl;
        std::cout << "Secret: " << contacts[i].secret << std::endl;
    }
}

