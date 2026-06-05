#ifndef __CELEBRITY_H
#define __CELEBRITY_H


#include "PublicFigure.h"
#include "Tweet.h"
using namespace std;

class Celebrity : virtual public PublicFigure
{
private:
    char* industry;
    int followers;

public:
    Celebrity(const char* name, double popularityScore,
              const char* publicRole, const char* industry, 
              int followers);

    ~Celebrity();
    Celebrity& operator=(const Celebrity& other);

    bool operator==(const Celebrity& other) const;

    const char* getIndustry() const;
    int getFollowers() const;

};

#endif // __CELEBRITY_H
