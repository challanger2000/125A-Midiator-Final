#include "DemoTimer.h"

#include <iostream>

int main() {
    using midiator::DemoTimer;

    DemoTimer demo;
    demo.configure(1000.0, false);

    if (demo.allowedSamples(false, 5000) != 5000)
        return 1;

    if (demo.allowedSamples(true, 10000) != 10000)
        return 2;

    if (demo.allowedSamples(true, 19999) != 19999)
        return 3;

    if (demo.expired())
        return 4;

    if (demo.allowedSamples(true, 100) != 1)
        return 5;

    if (!demo.expired())
        return 6;

    if (demo.allowedSamples(true, 512) != 0)
        return 7;

    DemoTimer full;
    full.configure(1000.0, true);

    for (int i = 0; i < 100; ++i) {
        if (full.allowedSamples(true, 1024) != 1024)
            return 8;
    }

    if (full.expired())
        return 9;

    std::cout << "Midiator DemoTimer PASS\n";
    return 0;
}
