#include <iostream>
#include "mylib/mylib.h"

using namespace std;

int main()
{
    calculator* calc = getCalculator();
    int ret = calc->sum(5, 2);

    cout << ret << endl;

    return 0;
}
