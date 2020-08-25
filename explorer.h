//
// Created by Joe on 8/25/2020.
//

#ifndef CSIS_123A_PARTICIPATION_LAB_02__EXPLORER_H_
#define CSIS_123A_PARTICIPATION_LAB_02__EXPLORER_H_

#include <string>
using String = std::string;

    class Explorer {
    private:
        String name;
        int score;
        int num_gold;
        int num_silver;

    public:
        Explorer();
        Explorer(String n, int s, int nG, int nS);
        [[maybe_unused]] explicit Explorer(String n);
        int getScore() const;
        void findGold();
        void findSilver();
        void robbed();
        void robbed(int n);
        void showInfo();
    };



#endif//CSIS_123A_PARTICIPATION_LAB_02__EXPLORER_H_
