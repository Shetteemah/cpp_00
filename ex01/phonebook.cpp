# include "phonebook.hpp"
# include <iostream>
# include <iomanip>
# include <cmath>
# include <limits>

PhoneBook::PhoneBook() : numberOfContacts(0) {}

PhoneBook::~PhoneBook() {}

int PhoneBook::getIndexOfOldestContact() const {
    int i;
    int oldestIndex = 0;
    
    i = 1;
    while (i < numberOfContacts)
    {
        if (contacts[i].isEmpty())
        {
            return i;
        }
        if (contacts[i].getPhoneNumber() < contacts[oldestIndex].getPhoneNumber())
        {
            oldestIndex = i;
        }
        i++;
    }
    return oldestIndex;
}

void PhoneBook::addContact(const Contact &contact)
{
    if (numberOfContacts >= 8)
    {
        std::cout << "Phone book is full! Cannot add new contact." << std::endl;
    }
    else
    {
        contacts[numberOfContacts] = contact;
        numberOfContacts++;
        std::cout << "Contact added." << std::endl;
    }
}

void PhoneBook::searchContacts() const
{
    int i;

    i = 0;
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First name" << "|"
              << std::setw(10) << "Last name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    while (i < numberOfContacts)
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << truncate(contacts[i].getFirstName(), 10) << "|"
                  << std::setw(10) << truncate(contacts[i].getLastName(), 10) << "|"
                  << std::setw(10) << truncate(contacts[i].getNickname(), 10) << std::endl;
        i++;
    }

    int index;
    std::cout << "Enter the index of the contact you want to view: ";
    std::cin >> index;

    if (std::cin.fail() || index < 0 || index >= numberOfContacts)
    {
        std::cout << "Invalid index!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max() , '\n');
    }
    else
    {
        contacts[index].~Contact();
    }
}

// std::string PhoneBook::truncate(const std::string& str, size_t width)
// {
//     if (str.length() > width)
//     {
//         return str.substr(0, width - 1) + ".";
//     }
//     else
//     {
//         return str;
//     }
// }
