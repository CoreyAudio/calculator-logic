#include "calculator.h"

calculator::calculator(double n1, double n2, char o) : a(n1), b(n2), op(o)
{
    std::cout << "Welcome to the Calculator program!\n\n";
}

void calculator::ObtainNumbers()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cout << "Enter your math problem: " << std::flush;
    if (std::cin.peek() == '\n')
    {
        std::cin.get();
        std::cout << '\n';
    }
    else
        std::cin >> a >> op >> b;
}

double calculator::Math() const
{
    double n = 0.0;
    switch (op)
    {
        case 43:
            n = a + b;
            break;
        case 45:
            n = a - b;
            break;
        case 42:
            n = a * b;
            break;
        case 47:
            if (b != 0)
            {
                n = a / b;
                break;
            }
            std::cerr << "Error: Division by zero!\n";
            n = -1;
            break;
        default:
            std::cerr << "Error: Invalid Operation!\n";
            n = -1;
    }
    return n;
}
