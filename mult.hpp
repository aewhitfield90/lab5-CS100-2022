#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

class Mult : public Base {
private:
    Base* temp1;
    Base* temp2;
public:
    Mult(Base* op1, Base* op2) : Base() {
        temp1 = op1;
        temp2 = op2;
    }
    virtual double evaluate() { return temp1->evaluate() * temp2->evaluate(); }
    virtual std::string stringify() { return '(' + temp1->stringify() + "*" + temp2->stringify() + ')'; }
};

#endif //__MULT_HPP__
