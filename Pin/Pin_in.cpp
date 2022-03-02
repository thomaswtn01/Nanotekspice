/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Pin_in
*/

#include "Pin_in.hpp"
#include <stdexcept>

nts::Pin_in::Pin_in(IComponent *name, size_t number) : Pin(name, number)
{
    this->result = false;
    this->form = UNDEFINED;
}

nts::Tristate nts::Pin_in::compute()
{
    if (is_pin_linked()) {
        if(this->result == NULL) {
            this->result = true;
            this->form = _link[0].first.get().compute(_link[0].second);
        }
        return(this->form);
    }
    return(UNDEFINED);
}

void nts::Pin_in::restart()
{
    this->result = false;
}

void nts::Pin_in::create_link(nts::IComponent &pin, size_t pin2)
{
    if (link_of_pin(pin, pin2) == NULL) {
        if(is_pin_linked()) {
            throw std::runtime_error("trop de pin");
        }
        _link.emplace_back(pin, pin2);
        pin.setLink(pin2, _function, _pin );
    }
}
nts::Pin_in::~Pin_in()
{
}
