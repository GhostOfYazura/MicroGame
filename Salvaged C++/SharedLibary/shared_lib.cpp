#include "shared_lib.h"

void pipecommand(string strCmd)
{
    std::array<char, 80> buffer;
    FILE *pipe = popen(strCmd.c_str(), "r");
    if (!pipe)
    {
        std::cerr << "cannot open pipe for reading" << std::endl;
    }
    int c=0;
    while(fgets(buffer.data(),90, pipe) != NULL)
    {
        c++;
        std::cout << c << "\t" << buffer.data();
    }
    pclose(pipe);
}

void SaySomething(string str)
{
    std::cout << "I typed:" << str << endl;
}

void Greetings()
{
    std::cout << "Hellow";
}