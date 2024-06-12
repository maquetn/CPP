#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

PhoneBook::PhoneBook() : count(0) {}

void PhoneBook::addContact(const Contact& newContact) {
    if (count < 8) {
        contacts[count] = newContact;
        count++;
    } else {
        std::cout << "Maximum contacts reached. Oldest contact will be replaced." << std::endl;
        for (int i = 0; i < 7; ++i) {
            contacts[i] = contacts[i + 1];
        }
        contacts[7] = newContact;
    }
}

void PhoneBook::listContacts() const {
if (count == 0) {
        std::cout << "No contacts available." << std::endl;
        return;
    }

    std::cout << "\n\033[1;32mContacts list:\033[0m\n" << std::endl;
    std::cout << std::right << std::setw(10) << "Index" << " | "
              << std::setw(10) << "First Name" << " | "
              << std::setw(10) << "Last Name" << " | "
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;

    for (int i = 0; i < count; ++i) {
        std::string firstName = contacts[i].getFirstName().substr(0, 10);
        if (contacts[i].getFirstName().length() > 10)
            firstName[9] = '.';
        
        std::string lastName = contacts[i].getLastName().substr(0, 10);
        if (contacts[i].getLastName().length() > 10)
            lastName[9] = '.';
        
        std::string nickname = contacts[i].getNickname().substr(0, 10);
        if (contacts[i].getNickname().length() > 10)
            nickname[9] = '.';
        
        std::cout << std::right << std::setw(10) << i + 1 << " | "
                  << std::setw(10) << firstName << " | "
                  << std::setw(10) << lastName << " | "
                  << std::setw(10) << nickname << std::endl;
    }

    int index;
    std::cout << "\nEnter the index of the entry to display: ";

    while (!(std::cin >> index) || index < 1 || index > count) {
        if (std::cin.eof()) {
            std::cout << "\nExiting program. (EOF)\n";
            break;}
        std::cout << "Invalid input. Please enter a valid index." << std::endl; 
        std::cin.clear(); //clear input stream and ignore invalid input
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    }

    if (!std::cin.eof()) {
        const Contact& selectedContact = contacts[index - 1];
        std::cout << "\n\033[1;32mContact Information:\033[0m\n" << std::endl;
        std::cout << "First Name: " << selectedContact.getFirstName() << std::endl;
        std::cout << "Last Name: " << selectedContact.getLastName() << std::endl;
        std::cout << "Nickname: " << selectedContact.getNickname() << std::endl;
        std::cout << "Phone Number: " << selectedContact.getPhoneNumber() << std::endl;
        std::cout << "Secret: " << selectedContact.getSecret() << std::endl;
    }
}