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
        _outputs[name] = std::dynamic_pointer_cast<nts::Output>(newfunction);
    if (type == "input") // || type == "clock")
        _inputs[name] = std::dynamic_pointer_cast<nts::Input>(newfunction);
}

nts::Tristate Functions::compute(std::size_t pin)
{
    return (nts::FALSE);
}

void Functions::setLink(std::size_t pin, nts::IComponent &pin2, std::
    size_t pin3)
{

}

void Functions::simulate(std::size_t tick)
{
    int i = 0;
//Pour matteo : auto sert a mettre un tyoe sans le connaitre donc on peut le deduire
// donc bouble for avec auto pour chaque component
    while(i < tick) {
        //simulate selon les component probable
        for (auto &i : _inputs)
            i.second->checkifgood();
        for (auto &i : _function)
            i.second->compute(0);
        for (auto &i : _outputs)
            i.second->compute(1);
        for (auto  &i : _clocks)
            i.second->fucntion_clock();
        _tick++;
        i++;
    }
}

void Functions::dump() const
{
    bool clock = true;

    for(auto &i : _function) {
        if(clock == true)
            clock = false;
        std::cout << i.first;
        std::cout << ":" << std::endl;
        i.second->dump();
    }
}




void Functions::new_IN(const std::string &name, const std::string &number)
{
    for (auto &function : _inputs) {
        if(function.first == name) {
            function.second->new_number(number);
            return;
        }
     //penser a enlever return si ca marche pas
    }
    //gestion derreur ?
}

void Functions::new_LINK(std::string pin1_name, size_t pin1_number, std::string pin2_name, size_t pin2_number)
{
    nts::IComponent *pin1 = _function[pin1_name].get();
    nts::IComponent *pin2 = _function[pin2_name].get();

    pin1->setLink(pin1_number, *pin2, pin2_number);
    pin2->setLink(pin2_number, *pin1, pin1_number);


    //gestion derreur ?

}

//function display a bien ecrire
void Functions::Display()
{
    size_t tickmine1 = _tick - 1;

    std::cout << "tick: " << tickmine1 << std::endl;
    std::cout << "input(s):\n";

    //rentrer dans le function display pour les input et output
    for(auto &input : _inputs) {
        input.second->display(input.first);
    }

    std::cout << "output(s):\n";

    for(auto &output : _outputs) {
        output.second->display(output.first);
    }

}


Functions::~Functions()
{
}
