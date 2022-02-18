#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"

class Div : public Base {
private:
    Base* temp1;
    Base* temp2;
public:
    Div(Base* op1, Base* op2) : Base() {
        temp1 = op1;
        temp2 = op2;
        if (op2->evaluate() == 0) { throw std::invalid_argument("divide by zero."); }
    }
    virtual double evaluate() { return temp1->evaluate() / temp2->evaluate(); }
    virtual std::string stringify() { return '(' + temp1->stringify() + "/" + temp2->stringify() + ')'; }
};

#endif //__DIV_HPP__
