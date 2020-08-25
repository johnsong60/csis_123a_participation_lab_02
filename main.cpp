// Author: johnathan song
// GitHub:
// August 25, 2020
// csis 123a

#include "explorer.h"

int main() {

    Explorer player1;
    Explorer player2("Bounty Bob", 1000, 100, 50);
    player1.showInfo();
    player2.showInfo();
    player1.findGold();
    player1.findGold();
    player1.findSilver();
    player1.showInfo();
    player2.showInfo();
    player2.robbed(100);
    player2.showInfo();
    player2.robbed();
    player2.showInfo();


}
