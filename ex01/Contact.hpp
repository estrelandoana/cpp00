/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:15:38 by apaula-l          #+#    #+#             */
/*   Updated: 2025/07/02 15:42:54 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>
# include <cctype>

class Contact
{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;

        std::string truncate(const std::string& str) const;
        std::string askInput(const std::string& prompt, bool (*validator)(const std::string&)) const;

    public:
        Contact(void);
        ~Contact(void);

        void setContact(void);
        void displaySummary(int index) const;
        void displayFull(void) const;
};

#endif
