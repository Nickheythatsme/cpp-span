#include <iostream>
#include "./src/span.hpp"

int main(int argc, char **argv)
{
    auto span = nstd::span<int>();
    std::cout << "setup" << std::endl;
}