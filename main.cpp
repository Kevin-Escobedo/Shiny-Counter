#include "Counter.hpp"

int main(int argc, char** argv)
{
    const char* target = "Bulbasaur";

    if(argc == 2)
    {
        target = argv[1];
    }

    Counter c(target, 0, 1);
    std::cout<<c<<std::endl;

    return 0;
}
