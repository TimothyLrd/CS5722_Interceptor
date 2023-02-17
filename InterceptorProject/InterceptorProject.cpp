#include <iostream>
#include "PlayerSoftware.h"
int main()
{
    PlayerSoftware software = PlayerSoftware();
    PlayerHardware hardware = PlayerHardware();

    software.registerInterceptor(&hardware);
    std::cout << software.service() << "\n";

    software.pressButtonEvent(play);
    std::cout << software.service() << "\n";

    software.pressButtonEvent(stop);
    std::cout << software.service() << "\n";
}

