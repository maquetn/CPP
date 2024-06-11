#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string secret;

public:
    Contact() {}
    Contact(const std::string& firstName, const std::string& lastName, const std::string& nickname,
            const std::string& phoneNumber, const std::string& secret);

    const std::string& getFirstName() const;
    const std::string& getLastName() const;
    const std::string& getNickname() const;
    const std::string& getPhoneNumber() const;
    const std::string& getSecret() const;
};

#endif // CONTACT_HPP
