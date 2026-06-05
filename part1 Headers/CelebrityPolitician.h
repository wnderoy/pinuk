#ifndef __CELEBRITY_POLITICIAN_H
#define __CELEBRITY_POLITICIAN_H

#include "Politician.h"
#include "Celebrity.h"

// multiple inheritance: a public figure who is both a Celebrity and a Politician
class CelebrityPolitician : public Politician, public Celebrity
{
private:
    double mediaInfluence;

public:
   CelebrityPolitician(const char* name, double popularityScore, const char* publicRole,
                        const char* party, const char* ideology,
                        const char* industry, int followers,
                        double mediaInfluence);
    ~CelebrityPolitician();
    CelebrityPolitician(const CelebrityPolitician& other);
    CelebrityPolitician& operator=(const CelebrityPolitician& other);
    
    double getMediaInfluence() const;

    void influencePublicDebate() const;
};

#endif // __CELEBRITY_POLITICIAN_H
