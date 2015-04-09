
#include <iostream>
#include "LeapMotionUE4.h"

int main(int argc, char* argv[])
{
    //LeapVisualizer::capture();
    LeapMotionUE4::start_capture();

    while (true) {
        //std::cout << LeapVisualizer::getPalmPosition(0) << std::endl;
    }
    return 0;
}
