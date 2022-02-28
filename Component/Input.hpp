/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Input
*/

#ifndef INPUT_HPP_
#define INPUT_HPP_
#include <string>
#include "../Pin/Pin_out.hpp"

namespace nts {
class Input : public IComponent{
    public:
        Input(std::string &number);
        ~Input();
//Function de Icomponent quil faut remmetre ici alors quelle est herite pour que ca marche me demandez pas pq jsp
        void simulate(std::size_t tick) override;
        Tristate compute(size_t pin) override final;
        void setLink(size_t pin, IComponent &other, size_t otherPin) override final;
        void dump() const override ;

    //input function
    Tristate number() const;
    virtual void new_number(Tristate number);
    void new_number(int number);
    void new_number(std::string &number);
    void display(std::string &name);
    void checkifgood();
    protected:
    Tristate _number;
    Tristate *_newnumber;
    Pin_out _pin_out;
    private:
};
}
#endif /* !INPUT_HPP_ */
