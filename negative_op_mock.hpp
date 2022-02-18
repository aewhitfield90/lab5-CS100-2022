#ifndef __NEGATIVE_OP_MOCK_HPP__
#define __NEGATIVE_OP_MOCK_HPP__

#include <string>

class NegativeOpMock: public Base {
    public:
        NegativeOpMock() { }

        virtual double evaluate() { return -2.5; }
        virtual string stringify() { return "-2.5"; }
}

#endif //__NEGATIVE_OP_MOCK_HPP__
