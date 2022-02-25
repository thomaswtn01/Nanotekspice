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

#ifndef PARSE_HPP_
#define PARSE_HPP_

class Parse {
    public:
        Parse(char *filename);
        ~Parse();
    void Emptyfile();
    void composent_name(char *file);
    void search_chipset(std::stringstream &no_header_part);
    void search_link(std::stringstream &no_header_part);
    std::string input();
    std::string output();
    protected:
    char *filename;
    private:
};

#endif /* !PARSE_HPP_ */
