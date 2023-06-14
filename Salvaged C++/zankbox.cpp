#include <iostream>
#include <cstdio>

#include <string>
#include <fstream>

int b;

int main(int a) {
    //std::cout << a << b;
    std::cin >> b;
    //b = a + 5;
    std::ofstream myfile("TestCase.txt", std::ios::app);
    //myfile.open ("TestCase.txt");
    myfile << a << " " << b << std::endl;
    myfile.close();
    if (b < a)
    {
        printf("zero\neven");
    }
    while (a <= b)
    {
        for (a; a <= 9; a++)
        {
            if (b < a)
            {
                a = 9;
                break;
            }
            switch(a)
            {
                case(1):
                    printf("one\n");
                    break;
                case(2):
                    printf("two\n");
                    break;
                case(3):
                    printf("three\n");
                    break;
                case(4):
                    printf("four\n");
                    break;
                case(5):
                    printf("five\n");
                    break;
                case(6):
                    printf("six\n");
                    break;
                case(7):
                    printf("seven\n");
                    break;
                case(8):
                    printf("eight\n");
                    break;
                case(9):
                    printf("nine\n");
                    break;
            }
        }
        if (a <= b)
        {
            if ((a % 2) != 1)
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
        }
        a++;
    }
    return 0;
}