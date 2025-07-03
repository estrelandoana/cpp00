/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 15:43:29 by apaula-l          #+#    #+#             */
/*   Updated: 2025/07/02 17:36:15 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool anyInputIsValid(const std::string& input)
{
    (void) input;
    return true;
}

bool isPhoneNumberValid(const std::string& input)
{
    return input.find_first_not_of("0123456789") == std::string::npos;
}

bool isNicknameValid(const std::string& input)
{
    return input.length() <= 15;
}

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string Contact::truncate(const std::string& str) const{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

std::string Contact::askInput(const std::string& prompt, bool (*validator)(const std::string&)) const
{
    std::string input;

    while (true)
    {
        std::cout << prompt;

        if (!std::getline(std::cin, input))
        {
            if (std::cin.eof())
            {
            std::cout << "Ctrl+D detected: exiting the program.";
            std::exit(0);
            }
            std::cerr << "Input error. Please try again.";
            std::cin.clear();
            continue;
        }
        if (input.empty())
        {
            std::cout << "Field cannot be empty. Please try again.";
            continue;
        }
        if (!validator(input))
        {
            std::cout << "Invalid input. Please try again.";
            continue;
        }
        return input;
    }
}

void Contact::setContact(void)
{
    _firstName      = askInput("First Name: ", anyInputIsValid);
    _lastName       = askInput("Last Name: ", anyInputIsValid);
    _nickname       = askInput("Nickname: ", isNicknameValid);
    _phoneNumber    = askInput("Phone Number: ", isPhoneNumberValid);
    _darkestSecret  = askInput("Darkest Secret: ", anyInputIsValid);
}

void Contact::displaySummary(int index) const
{
    std::cout << std::setw(10) << index << "|";
    std::cout << std::setw(10) << truncate(_firstName) << "|";
    std::cout << std::setw(10) << truncate(_lastName) << "|";
    std::cout << std::setw(10) << truncate(_nickname) << std::endl;
}

void Contact::displayFull() const
{
    std::cout << "First Name:     " << _firstName     << std::endl;
    std::cout << "Last Name:      " << _lastName      << std::endl;
    std::cout << "Nickname:       " << _nickname      << std::endl;
    std::cout << "Phone Number:   " << _phoneNumber   << std::endl;
    std::cout << "Darkest Secret: " << _darkestSecret << std::endl;
}
