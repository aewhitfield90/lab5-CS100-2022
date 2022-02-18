#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"

class Sub : public Base {
private:
    Base* temp1;
    Base* temp2;
public:
    Sub(Base* op1, Base* op2) : Base() {
        temp1 = op1;
        temp2 = op2;
    }
    virtual double evaluate() { return temp1->evaluate() - temp2->evaluate(); }
    virtual std::string stringify() { return '(' + temp1->stringify() + "-" + temp2->stringify() + ')'; }
};

#endif //__SUB_HPP__