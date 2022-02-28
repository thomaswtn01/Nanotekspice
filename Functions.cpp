/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Functions
*/

#include "Functions.hpp"

void Functions::create(std::unique_ptr<nts::IComponent>function, const std::string &name, const std::string &type)
{
    //create new component pour les differents fonctions
    std::shared_ptr<nts::IComponent> newfunction = std::move(function);
    if(_function.find(name) != _function.end())
        quick_exit; // revoir la conditions
    else
     _function[name] = newfunction;
        initialize_component(name, type, newfunction);
}

void Functions::initialize_component(const std::string &name, const std::string &type, std::shared_ptr<nts::IComponent> newfunction)
{
    if (type == "clock")
        _clocks[name] = std::dynamic_pointer_cast<nts::Clock>(newfunction);
    if (type == "output")
        _output[name] = std::dynamic_pointer_cast<nts::Output>(newfunction);
    if (type == "input") // || type == "clock")
        _input[name] = std::dynamic_pointer_cast<nts::Input>(newfunction);
}

Functions::~Functions()
{
}
