#include <iostream>
#include <fstream>

#include "my_regex.hxx"

namespace my_regex {
    unsigned CountVowels(std::string& file_name) {
        unsigned counter = 0;

        std::ifstream file_in;
        file_in.open(file_name);

        if (!file_in.is_open()) {
            throw std::ios_base::failure("Error: can't open file");
        } else {
            char symbol;
            std::string str;
            std::regex rex("a|o|u|i|e|y|A|O|U|I|E|Y");

            while (file_in.get(symbol)) {
                str = symbol;
                if (std::regex_search(str.data(), rex))
                    ++counter;
            }
        }

        file_in.close();
        return counter;
    }

    unsigned CountSingleLetWords(std::string& file_name) {
        unsigned counter = 0;

        std::ifstream file_in;
        file_in.open(file_name);

        if (!file_in.is_open()) {
            throw std::ios_base::failure("Error: can't open file");
        } else {
            std::string str;
            std::regex rex("[a-zA-Z]");

            while (!file_in.eof()) {
                file_in >> str;

                if (std::regex_match(str.data(), rex)) {
                    ++counter;
                }
            }
        }

        file_in.close();
        return counter;
    }
}