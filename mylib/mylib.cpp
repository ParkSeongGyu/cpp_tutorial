#include "mylib.h"

class calculatorImple : public calculator {
public:
    virtual int sum(int a, int b) override
    {
        return a + b;
    }

    virtual int minus(int a, int b) override
    {
        return a - b;
    }
};

calculator* getCalculator()
{
    return new calculatorImple;
}
