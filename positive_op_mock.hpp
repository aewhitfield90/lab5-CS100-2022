#ifndef __POSITIVE_OP_MOCK_HPP__
#define __POSITIVE_OP_MOCK_HPP__

#include <string>

class PositiveOpMock: public Base {
    public:
        PositiveOpMock() { }

        virtual double evaluate() { return 5.5; }
        virtual string stringify() { return "5.5"; }
}

#endif //__POSITIVE_OP_MOCK_HPP__
