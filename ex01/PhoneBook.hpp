#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
    Contact contacts[8];
    int count;

public:
    PhoneBook();
    void addContact(const Contact& newContact);
    void listContacts() const;
};

#endif // PHONEBOOK_HPP
