
// must define the IL_STD marco for current standard c++ version rather than older one.
#undef IL_STD
#define IL_STD

#include <iostream>
#include <sstream>
#include <ilcplex/ilocplex.h>
#include "demo1.hpp"
#include "demo2.hpp"

using namespace std;

int main() {
    demo1();
    std::cout << "================================== " << std::endl;
    demo2();
    std::cout << "==================================" << std::endl;
    return 0;
}
