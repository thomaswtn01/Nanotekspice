/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** main
*/

#include <iostream>
#include <fstream>
#include "Terminal.hpp"
#include "Shell.hpp"
#include "Functions.hpp"

int main(int ac, char **av)
{
    if(ac!=2)
        std::cout << "more argument needed" << std :: endl;
    Functions functions;
    Parse parse(av[1], functions);
    functions.simulate();
    Shell shell(functions);
    shell.run();
    Terminal("", av[1]);
    return(0);

}