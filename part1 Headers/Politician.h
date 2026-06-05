#ifndef __POLITICIAN_H
#define __POLITICIAN_H


#include "PublicFigure.h"
using namespace std;

class Politician : virtual public PublicFigure
{
private:
    char* party;
    char* ideology;

public:
    Politician(const char*& name, double popularityScore,
               const char*& publicRole,
               const char*& party, const char*& ideology);

    char* getParty() const;
    char* getIdeology() const;

    void respondToCoverage() const;
};

#endif // __POLITICIAN_H
