#include <iostream>
#include "Facade.h"


int main()
{
    Facade* facade = Facade::GetInstance();
    CDPlayer* player = facade->getCDPlayer();

    ConcreteInterceptor interceptor = ConcreteInterceptor();
    facade->registerInterceptor(&interceptor);

    vector<string> trackList = { "Track 1", "Track 2", "Track 3", "Track 4" };
    player->setTrackList(&trackList);
    
    std::cout << "Initial state:\n";
    std::cout << player->playerStatus()<< "\n";
    std::cout << player->nowPlaying() << "\n\n";

    std::cout << "Turning on the CD Player:\n";
    player->pressButton(powerButton);
    std::cout << player->playerStatus() << "\n";
    std::cout << player->nowPlaying() << "\n\n";
    
    std::cout << "Skipping to the next track:\n" << "\n";
    player->pressButton(nextSongButton);
    std::cout << player->nowPlaying() << "\n\n";

    std::cout << "Turning off the CD Player:\n";
    player->pressButton(powerButton);
    std::cout << player->playerStatus() << "\n";
    std::cout << player->nowPlaying() << "\n\n";

    std::cout << "Turning on the CD Player, with the last played track saved:\n";
    player->pressButton(powerButton);
    std::cout << player->playerStatus() << "\n";
    std::cout << player->nowPlaying() << "\n\n";

    std::cout << "Skipping the rest of the CD:\n";
    player->pressButton(nextSongButton);
    std::cout << player->nowPlaying() << "\n";
    player->pressButton(nextSongButton);
    std::cout << player->nowPlaying() << "\n";
    player->pressButton(nextSongButton);
    std::cout << player->nowPlaying() << "\n\n";

    std::cout << "Turning off the CD Player:\n";
    player->pressButton(powerButton);
    std::cout << player->playerStatus() << "\n";
    std::cout << player->nowPlaying() << "\n";
}

