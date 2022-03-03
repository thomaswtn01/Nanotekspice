/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Clock
*/

#ifndef CLOCK_HPP_
#define CLOCK_HPP_
#include <string>
#include "Input.hpp"
namespace nts {
class Clock : public Input{
    public:
        Clock(std::string clock);
        ~Clock();
    void dump() const override;
    void fucntion_clock();
    protected:
    std::string _clock;
    private:
};
}

#endif /* !CLOCK_HPP_ */
