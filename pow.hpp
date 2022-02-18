#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <cmath>

class Pow : public Base {
private:
    Base* temp1;
    Base* temp2;
public:
    Pow(Base* op1, Base* op2) : Base() {
        temp1 = op1;
        temp2 = op2;
    }
    virtual double evaluate() { return pow(temp1->evaluate(), temp2->evaluate()); }
    virtual std::string stringify() { return '(' + temp1->stringify() + "**" + temp2->stringify() + ')'; }
};

#endif //__DIV_HPP__