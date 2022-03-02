/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Input
*/

#include "Input.hpp"

nts::Input::Input(std::string &number) : _pin_out(this, 1)
{
    new_number(number);
}

void nts::Input::setLink(size_t pin, nts::IComponent &other, size_t otherPin)
{
    if(pin == 1)
        _pin_out.create_link(other, otherPin);
    else
        throw std::runtime_error("pin?");
}

nts::Tristate nts::Input::compute(size_t pin)
{
    if (pin == NULL || pin == 0) {
        _pin_out.restart();
        return(UNDEFINED);
    }
    else
        return(_number);
    //condition si le pin est pas reconnu ?
}

void nts::Input::dump() const
{
    //verifier si la mouli regarde comment cest ecris vu que ya pas le dump da,s le sujet
    std::stringstream ss;
    ss << this;
    std::cout << std::endl << "\t-Type   :\tInput" << std::endl;
    std ::cout << "\t-Address:\t" << ss.str() ;
    std::cout << "\t-Value  :\t" << _number << std::endl;
    std::cout << "\t-Links  :" << std::endl; _pin_out.dump();
}

nts::Tristate nts::Input::number() const
{
    //this->number = _number;
    return(_number);
}
nts::Input::~Input()
{
}



///New number of pin fubnction :


void nts::Input::new_number(int number)
{
    new_number(UNDEFINED);

    while(number == 1)
    {
        new_number(TRUE);
        break;
    }
    while(number == 0)
    {
        new_number(FALSE);
        break;
    }

}
void nts::Input::new_number(std::string &number)
{
    new_number(std::stoi(number));
    //mettre gestion derreur avec value a Undefined ?
}

void nts::Input::new_number(nts::Tristate number)
{
    delete _newnumber;
    _newnumber = new Tristate(number);
}

//function

void nts::Input::display(std::string &name)
{
    std::cout << "\t" << name << ": " << _number << std::endl;
}

void nts::Input::checkifgood()
{
    if(_newnumber !=NULL) {
        _number = *_newnumber;
        delete _newnumber;
    }
    else
        _newnumber = NULL;
}
