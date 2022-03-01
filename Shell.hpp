/*
** EPITECH PROJECT, 2022
** Nanotekspice
** File description:
** Shell
*/

#ifndef SHELL_HPP_
#define SHELL_HPP_

#include "Functions.hpp"
class Shell
{
private:
    Functions _circuit;
public:
    Shell(Functions &circuit);
    void run();
};

class Stopped
{
public:
    static bool Run;
    static void StopShell(int);
};

#endif /* !SHELL_HPP_ */
