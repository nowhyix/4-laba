#include "PlS.cpp"
int main()
{
    PlS Pl1{ "Anna", 100 };
    PlS Pl2{ "Yomi", 50 };
    Pl1 -= 43;
    Pl2 += 10;
    showResults(Pl1, Pl2);
    return 0;
}