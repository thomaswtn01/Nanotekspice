/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Clock
*/

#include "Clock.hpp"

nts::Clock::Clock(std::string clock) : Input(clock)
{
    this->_clock = clock;
}

void nts::Clock::dump() const
{
    //verifier si la mouli regarde comment cest ecris vu que ya pas le dump da,s le sujet
    std::stringstream ss;
    ss << this;
    std::cout << std::endl << "\t-Type   :\tInput" << std::endl;
    std ::cout << "\t-Address:\t" << ss.str() ;
    std::cout << "\t-Value  :\t" << _number << std::endl;
    std::cout << "\t-Links  :" << std::endl; _pin_out.dump();
}


//Composant clock initial 1=0

void nts::Clock::fucntion_clock()
{
    if(_number == TRUE) {
        delete _newnumber;
        _newnumber = new Tristate(FALSE);
    }
    else if (_number == FALSE) {
        delete _newnumber;
        _newnumber = new Tristate(TRUE);
    }
}

nts::Clock::~Clock()
{
}
