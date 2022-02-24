/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Parse
*/

#include <string>

#ifndef PARSE_HPP_
#define PARSE_HPP_

class Parse {
    public:
        Parse(std::string filename);
        ~Parse();
    void Emptyfile();
    std::string composent_name();
    std::string input();
    std::string output();
    protected:
    int filename;
    private:
};

#endif /* !PARSE_HPP_ */
