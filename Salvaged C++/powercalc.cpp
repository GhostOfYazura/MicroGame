#include <iostream>


int power (int base , int exponent ) {
    if (exponent == 0)
    {
        return 1;
    }
    else 
    {
        return base * power(base, exponent - 1);
    }        
}

int main ()
{
    std::cout << power(3, 5);   
    return 0;
}