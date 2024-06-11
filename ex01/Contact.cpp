#include "Contact.hpp"

// Constructor with parameters
Contact::Contact(const std::string& firstName, const std::string& lastName, const std::string& nickname,
            const std::string& phoneNumber, const std::string& secret)
        : firstName(firstName), lastName(lastName), nickname(nickname),
          phoneNumber(phoneNumber), secret(secret) {}

// Public member functions to access private member variables
const std::string& Contact::getFirstName() const { return firstName; }
const std::string& Contact::getLastName() const { return lastName; }
const std::string& Contact::getNickname() const { return nickname; }
const std::string& Contact::getPhoneNumber() const { return phoneNumber; }
const std::string& Contact::getSecret() const { return secret; }
