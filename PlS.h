#ifndef TEST_PLS_H
#define TEST_PLS_H
#include <iostream>

using namespace std;

struct PlS {
public:
    string nickname;
    int score;

    inline PlS(string Nickname, unsigned int Score);
    inline bool operator > (PlS& Pl) const;
    inline bool operator < (PlS& Pl) const;
    inline bool operator == (PlS& Pl) const;
    inline PlS operator += (unsigned int points);
    inline PlS operator -= (unsigned int penalty);
};

#endif
