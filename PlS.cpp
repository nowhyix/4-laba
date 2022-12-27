#include <string>
#include "PlS.h"

using namespace std;

PlS::PlS(string Nickname, unsigned int Score) {
    this->nickname = Nickname;
    this->score = Score;
};

bool PlS::operator > (PlS& Pl) const {
    return this->score > Pl.score;
}

bool PlS::operator < (PlS& Pl) const {
    return this->score < Pl.score;
}

bool PlS::operator == (PlS& Pl) const {
    return this->score == Pl.score;
}

PlS PlS::operator += (unsigned int points) {
    this->score = this->score + points;
    return *this;
}

PlS PlS::operator-=(unsigned int penalty) {
    this->score = this->score - penalty;
    return *this;
}

inline void showResults(PlS Pl1, PlS Pl2) {
    if (Pl1 > Pl2) cout << Pl1.nickname << " is winner!" << " His score is " << Pl1.score << endl;
    else if (Pl1 < Pl2) cout << Pl2.nickname << " is winner!" << " His score is " << Pl2.score << endl;
    else cout << "Draw" << endl;
}