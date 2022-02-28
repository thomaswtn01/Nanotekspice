/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Icomponent
*/

//me demande pas pq il faut rajouter ca pour que ca marche je sais pas 
#pragma once


#include <string>

namespace nts
{
    enum Tristate {
        UNDEFINED = ( - true ) ,
        TRUE = true ,
        FALSE = false
};
class IComponent
{
    public :
    virtual ~ IComponent () = default ;
    virtual void simulate ( std :: size_t tick ) = 0;
    virtual nts :: Tristate compute ( std :: size_t pin ) = 0;
    virtual void setLink ( std :: size_t pin , nts :: IComponent & other , std ::
    size_t otherPin ) = 0;
    virtual void dump () const = 0;
    };
}



std::ostream &operator << (std::ostream &out, nts::Tristate state);
