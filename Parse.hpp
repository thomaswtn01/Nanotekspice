/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Parse
*/

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include "Functions.hpp"
#ifndef PARSE_HPP_
#define PARSE_HPP_

class Parse {
    public:
        Parse(char *filename, Functions &thing);
        ~Parse();
    void Emptyfile();
    void composent_name(Functions &thing, char *file);
    void search_chipset(Functions &thing ,std::stringstream &no_header_part);
    void search_link(Functions &function, std::stringstream &no_header_part);
    std::string input();
    std::string output();
    protected:
    char *filename;
    private:
};

#endif /* !PARSE_HPP_ */
