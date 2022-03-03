/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Output
*/

#include "Output.hpp"

nts::Output::Output()
{
    this->_number = UNDEFINED;
    this->_mapping.PinIN_add(this, 1);
}

nts::Tristate nts::Output::compute(size_t pin)
{
    if(pin == 0) {
        _mapping.restart();
        return(UNDEFINED);
    }
    _number = _mapping.compute(1);
    return(_number);
}

void nts::Output::dump() const
{
    std::stringstream ss;
    ss << this;
    std::cout << std::endl << "\t-Type   :\tInput" << std::endl;
    std ::cout << "\t-Address:\t" << ss.str() ;
    std::cout << "\t-Value  :\t" << _number << std::endl;
    std::cout << "\t-Links  :" << std::endl; _mapping.dump();
}

void nts::Output::simulate(std::size_t tick)
{
}
//////////:display/////////////
void nts::Output::display()
{
}

void nts::Output::setLink(size_t pin, nts::IComponent &other, size_t otherPin)
{
    _mapping.setLink(pin, other, otherPin);
}
void nts::Output::display(std::string const &number)
{
    std::cout << " " << number << " :" << _number << "\n";
}

nts::Output::~Output()
{

}