/*
*****************************************************************************
                              Pair.h
Full Name  : Aryan Khurana
Student ID#: 145282216
Email      : akhurana22@myseneca.ca
Date of completion    : 01 February 2023
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*****************************************************************************
*/

#ifndef SDDS_PAIR_H
#define SDDS_PAIR_H

#include <iostream>

namespace sdds {
    class Pair
    {
        std::string m_key{};
        std::string m_value{};
    public:
        Pair();
        const std::string& getKey() { return m_key; }
        const std::string& getValue() { return m_value; }
        Pair(const std::string& key, const std::string& value) : m_key{ key }, m_value{ value }{};

        // Display Function
        std::ostream& display(std::ostream& os) const;

        // == Operator Overload
        bool operator==(const Pair& pair) const;
    };

    // Insertion operator overload
    std::ostream& operator<<(std::ostream& os, const Pair& pair);
}

#endif // SDDS_PAIR_H