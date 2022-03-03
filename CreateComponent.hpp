/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** CreateComponent
*/


//cc ici ca va faire la factory

#include <string>
#include "Icomponent.hpp"
#include <memory>

#ifndef CREATECOMPONENT_HPP_
#define CREATECOMPONENT_HPP_

class CreateComponent{
    public:
        CreateComponent();
        ~CreateComponent();
        void newfunctions();
        virtual nts::Tristate compute(std::size_t pin);
        std::unique_ptr < nts::IComponent > createComponent ( const std::string &type, const std::string &name ) ;
    protected:
    std :: unique_ptr < nts :: IComponent > createclock (const std::string &name) const noexcept;
    std :: unique_ptr < nts :: IComponent > createinput (const std::string &name) const noexcept;
    std :: unique_ptr < nts :: IComponent > createoutput (const std::string &name) const noexcept ;
    std :: unique_ptr < nts :: IComponent > createtrue (const std::string &name) const noexcept;
    std :: unique_ptr < nts :: IComponent > createfalse (const std::string &name) const noexcept;
    std :: unique_ptr < nts :: IComponent > create4001 (const std::string &name) const noexcept;
    std :: unique_ptr < nts :: IComponent > create4011 (const std::string &name) const noexcept;
    std :: unique_ptr < nts :: IComponent > create4030 (const std::string &name) const noexcept;
    std :: unique_ptr < nts :: IComponent > create4071 (const std::string &name) const noexcept;
    std :: unique_ptr < nts :: IComponent > create4081 (const std::string &name) const noexcept;
    std :: unique_ptr < nts :: IComponent > create4069 (const std::string &name) const noexcept;
    std :: unique_ptr < nts :: IComponent > create4008 (const std::string &name) const noexcept;
    std :: unique_ptr < nts :: IComponent > create4013 (const std::string &name) const noexcept;
    std :: unique_ptr < nts :: IComponent > create4017 (const std::string &name) const noexcept;
    std :: unique_ptr < nts :: IComponent > create4040 (const std::string &name) const noexcept;
    std :: unique_ptr < nts :: IComponent > create4094 (const std::string &name) const noexcept;
    std :: unique_ptr < nts :: IComponent > create4512 (const std::string &name) const noexcept;
    std :: unique_ptr < nts :: IComponent > create4514 (const std::string &name) const noexcept;
    std :: unique_ptr < nts :: IComponent > create4801 (const std::string &name) const noexcept;
    std :: unique_ptr < nts :: IComponent > create2716 (const std::string &name) const noexcept;
    private:
    const std::string _name;
    const std::string _type;
};

#endif /* !CREATECOMPONENT_HPP_ */
