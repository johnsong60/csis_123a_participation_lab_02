//
// Created by Joe on 8/25/2020.
//

#include <iostream>
#include "explorer.h"

using std::cout;
using std::endl;



Explorer::Explorer()
        : name("Miner 2049er"), score(100), num_gold(0), num_silver(0) {
}

Explorer::Explorer(String n, int s, int nG, int nS)
        : name(std::move(n)), score(s), num_gold(nG), num_silver(nS) {
}

[[maybe_unused]] Explorer::Explorer(String n) :name(std::move(n)), score(0), num_gold(0), num_silver(0){
}


int Explorer::getScore() const {
    return score;
}

void Explorer::findGold() {
    score += 10;
    num_gold+=10;
}

void Explorer::findSilver() {
    score += 5;
    ++num_silver;
}

void Explorer::robbed() {
    score = 0;
    num_gold = 0;
    num_silver = 0;
}

void Explorer::robbed(int n) {
    score -= n;
}

void Explorer::showInfo() {
    cout << "STATS <<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << "Name : " << name << endl;
    cout << "Score: " << score << endl;
    cout << "Gold Coins  : " << num_gold << endl;
    cout << "Silver Coins: " << num_silver << endl
         << endl;
}
