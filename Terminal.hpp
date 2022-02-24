/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Terminal
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <random>
#include "Parse.hpp"
#include "Icomponent.hpp"


#ifndef TERMINAL_HPP_
#define TERMINAL_HPP_

class Terminal {
    public:
        Terminal(std::string data, std::string fichier);
        ~Terminal();
    std::string display();
    std::string simulate();
    std::string loop();
    std::string dump();
    int change_value();


    protected:
    std::string fichier;
    private:
};

#endif /* !TERMINAL_HPP_ */
