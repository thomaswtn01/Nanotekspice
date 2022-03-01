/*
** EPITECH PROJECT, 2022
** Nanotekspice
** File description:
** Shell
*/

#include "Shell.hpp"
#include <csignal>

bool Stopped::Run = true;
Shell::Shell(Functions &circuit)
{
    _circuit = circuit;
}

void Shell::run()
{
    std::cout << "> ";
    std::string line;
    if (!getline(std::cin, line))
        return;
    std::string valueOne;
    std::string valueTwo;
    if (line == "simulate")
        _circuit.simulate();
    else if (line == "display")
        _circuit.Display();
    else if (line == "exit")
        return;
    else if (line == "dump")
        _circuit.dump();
    else if (line == "loop")
    {
        std::signal(SIGINT, Stopped::StopShell);
        while (Stopped::Run)
        {
            _circuit.simulate();
            _circuit.Display();
        }
        std::signal(SIGINT, SIG_DFL);
    }
    else
    {
        size_t pos = line.find('=');
        if (pos != std::string::npos)
        {
            valueOne = line.substr(0, pos);
            valueTwo = line.substr(pos + 1);
            _circuit.setInput(valueOne, valueTwo);
        }
        else
        {
            throw std::runtime_error("no valid input!");
        }
    }
    run();
}

void Stopped::StopShell(int)
{
    Run = false;
}