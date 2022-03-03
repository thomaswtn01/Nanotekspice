/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Pin
*/

#include "Pin.hpp"

nts::Pin::Pin(nts::IComponent *function, size_t name) : _function(*function), _name(name)
{
    this->_name = name;
}

bool nts::Pin::link_of_pin(IComponent &pin, size_t pin2) const
{
    //verifier cond
    // cond permet de voir si les pin sont link ou non
    for (auto const &linked : _link) { //on peut que mettre un for pour faire la condition s avec auto ??
        if(&linked.first.get() == &pin && linked.second == pin2)
            return (true);
        else
            return (false);
    }
}
bool nts::Pin::is_pin_linked()
{
    //verifier conditions
    return (_link.empty() == NULL);
}

void nts::Pin::dump() const
{
    int i = 0;
    std::stringstream ss;

    if (_link.empty())
        std ::cout << _pin << ": no link\n";
    //condition si la size du pin == 1

    else {
        while(_link.size() < i) {
            std::cout << _pin << i << std::endl;
            ss << &_link[i].first.get();
            //permet de recup les pin et de convertir leurs adresses en string
            std::cout<< "address =" << ss.str() << " pin =" << std::to_string(_link[i].second) << std::endl;

        }
    }
}
nts::Pin::~Pin()
{
}

