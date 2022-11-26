
#include <iostream>
#include <math.h>

void converseTo2(long long int a);
void converseTo10(long long int a);

int main()
{
    int choise = 1;
    while (choise != 0)
    {
        long long int number = 0;
        std::cout << "choise option:\n1 - converse decimal into binary code\n2 - converse binary into decimal code\
                      \n0 - exit\n";
        std::cin >> choise;
        std::cout << "enter number:\n";
        std::cin >> number;
        if (choise == 1)
        {
            converseTo2(number);
        }
        else if (choise == 2)
        {
            converseTo10(number);
        }
    }
}

void converseTo2(long long int a)
{
    long long tample = 0;
    for (int i = 1; a > 1; i *= 10)
    {
        if (a % 2 == 1)
        {
            tample += i;
        }
        a /= 2;
        if (a == 1)
        {
            tample += i * 10;
        }
    }
    std::cout << "result: " << tample << "\n";
}
void converseTo10(long long int a)
{
    int tample = 0;
    int mull = 0;
    int num = 0;
    int counter = 0;
    for (int i = 1; i <= a; i *= 10)
    {
        mull = pow(2, counter);
        num = (a / i % 10) * mull;
        tample += num;
        counter++;
    }
    std::cout << "result: " << tample << "\n";
}