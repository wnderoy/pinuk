#ifndef __POLITICIAN_H
#define __POLITICIAN_H


#include "PublicFigure.h"
using namespace std;

class Politician : public PublicFigure
{
private:
    string party;
    string ideology;

public:
    Politician(const string& name, double popularityScore,
               const string& publicRole,
               const string& party, const string& ideology);

    string getParty() const;
    string getIdeology() const;

    void respondToCoverage() const;
};

#endif // __POLITICIAN_H
