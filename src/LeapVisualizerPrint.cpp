
#include <iostream>
#include "LeapVisualizerCore.h"

int main(int argc, char* argv[])
{
    //LeapVisualizer::capture();
    LeapVisualizer::start_capture();

    while (true) {
        //std::cout << LeapVisualizer::getPalmPosition(0) << std::endl;
    }
    return 0;
}
