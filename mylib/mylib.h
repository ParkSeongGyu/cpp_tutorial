class calculator {
public:
    virtual int sum(int a, int b) = 0;
    virtual int minus(int a, int b) = 0;
};

calculator* getCalculator();