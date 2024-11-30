#include <iostream>
#include "Funcs.h"

int main()
{
    std::cout << "Hello World!\n";
    double s = 0;
    for (int i = 1; i <= 10; ++i) s = add(s, i * 0.1 + 5.2);
    std::cout << " s = " << s << '\n';
    double p = 1;
    for (int i = 1; i <= 10; ++i) p = mult(p, i * 0.1 + 5.2);
    std::cout << " p = " << p << '\n';
}
