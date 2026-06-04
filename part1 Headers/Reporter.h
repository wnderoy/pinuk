#ifndef __REPORTER_H
#define __REPORTER_H


#include "Article.h"
#include "InformationSource.h"
using namespace std;

// Forward declarations
class Channel;
class Story;

class Reporter
{
protected:
    char* name;
    bool isIndependent;
    double reliabilityScore;
    char* specialty;
    int yearsExperience;

    Article** writtenArticles;
    int articleCount;

    Channel* worksFor;

public:
    Reporter(const char*& name, bool isIndependent,
             double reliabilityScore, const char*& specialty,
             int yearsExperience);
    ~Reporter();

    char* getName() const;
    bool getIsIndependent() const;
    double getReliabilityScore() const;
    char* getSpecialty() const;
    int getYearsExperience() const;

    Article* writeArticle();
    void investigateStory(Story* story);
    char* compareSources() const;
};

#endif // __REPORTER_H
