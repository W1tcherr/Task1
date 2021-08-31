#include <iostream>

unsigned int getValue();
unsigned int getSumm(unsigned int number);

int main() {
    std::cout << getSumm(getValue());
    return 0;
}

unsigned int getValue()
{
    while(true)
    {
        std::cout << "Enter number: ";
        unsigned int value;
        std::cin >> value;
        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "\nWrong size, please re-enter.\n";
        }
        else
        {
            return value;
        }
    }
}

unsigned int getSumm(unsigned int number)
{
    unsigned long long sum = 0;
    for(unsigned int i = 3; i <= number; ++i)
    {
        if(i % 3 == 0 || i % 5 == 0)
            sum+=i;
    }
    return sum;
}