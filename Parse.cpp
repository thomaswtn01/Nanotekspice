/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Parse
*/

#include "Parse.hpp"
#include <algorithm>

Parse::Parse(char  *file)
{
    std::string file_name (file);
    std::ifstream filename(file_name, std::ios::in);
    file = this->filename;

    if(!filename)
        std::cout << file_name << " de merde pas la" << std::endl;
    ////mettre condition si pas .nts
    composent_name(file);
}

void Parse::composent_name(char *file)
{
    std::string file_name (file);
    std::ifstream filename(file_name, std::ios::in);
    std::string line;
    std::string remove_header_comment;
    std :: stringstream no_header_part;
    std ::stringstream ss(line); //// internet ??
    std::string emp;

    while(getline(filename, line)) {
        remove_header_comment = line.substr(0, line.find('#'));
        if ((size_t) std::count(remove_header_comment.begin(), remove_header_comment.end(), ' ') != remove_header_comment.length())
        no_header_part << remove_header_comment << std::endl;
        //Fonction bizarre pour parser une partie dont ici le header
        // voir un peu mieux pour la reutiliser
    }
    if (!getline(no_header_part, line))
        std::cout << "bad file with no chipset" << std::endl;
        // si on ne trouve pas le .chipset
    ss >> line >> emp;
    if(line == ".chipsets:" && emp.empty() != NULL) { //Revoir la condition
        search_chipset(no_header_part);
        search_link(no_header_part);
    }

}

void Parse::search_chipset(std::stringstream &no_header_part)
{

}
void Parse::search_link(std::stringstream &no_header_part)
{

}
std::string input()
{

}

void Parse::Emptyfile()
{

}

Parse::~Parse()
{
}
