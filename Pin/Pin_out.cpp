/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Pin_out
*/

#include "Pin_out.hpp"

nts::Pin_out::Pin_out(IComponent *function, size_t name) : Pin(function, name)
{
}

//function si le pin de sorti est link comme le premier
void nts::Pin_out::create_link(nts::IComponent &pin, size_t pin2)
{
    if(link_of_pin(pin, pin2) == NULL) {
        _link.emplace_back(pin , pin2);
        pin.setLink(pin2, _function, _pin);

    }

    //erreur a rajouter si le pin est le meme ?
}

nts::Tristate nts::Pin_out::compute()
{
    return (UNDEFINED);
}
void nts::Pin_out::restart()
{

}
nts::Pin_out::~Pin_out()
{
}
