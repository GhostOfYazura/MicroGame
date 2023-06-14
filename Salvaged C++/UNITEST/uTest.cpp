#include <iostream>
#include <cassert>

namespace katstest
{
void basicTest()
{
    assert(("2 was not reached.", 2+1 == 2));
    std::cout << "Test Passed\n";
}
}

int main(bool testActive)
{
//    if (testActive)
//    {
//        katstest::basicTest();
//    }
    int a = 0;
    return 0;
}