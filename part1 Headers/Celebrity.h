#ifndef __CELEBRITY_H
#define __CELEBRITY_H


#include "PublicFigure.h"
#include "Tweet.h"
using namespace std;

class Celebrity : public PublicFigure
{
private:
    char* industry;
    int followers;

public:
    Celebrity(const char*& name, double popularityScore,
              const char*& publicRole,
              const char*& industry, int followers);

    char* getIndustry() const;
    int getFollowers() const;

    Tweet* postReaction() const;
};

#endif // __CELEBRITY_H
