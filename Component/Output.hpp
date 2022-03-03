/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Output
*/

#ifndef OUTPUT_HPP_
#define OUTPUT_HPP_
#include "../Pin/ManagerofPin.hpp"
namespace nts {
class Output : public IComponent{
    public:
        Output();
        ~Output();

    //Icomponent functions
   void simulate(std::size_t tick) override;
    void setLink(size_t pin, IComponent &other, size_t otherPin) override ;
    void dump() const override ;
    Tristate compute(size_t pin = 1) override ;

    void display();
    void display(std::string const &number);

    protected:
    Tristate _number;
    ManagerofPin _mapping;
    private:
};
}

#endif /* !OUTPUT_HPP_ */
