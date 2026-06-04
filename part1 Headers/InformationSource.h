#ifndef __INFORMATION_SOURCE_H
#define __INFORMATION_SOURCE_H

#include "Date.h"
using namespace std;

// Forward declaration
class Article;

class InformationSource
{
protected:
    char* sourceName;
    char* text;
    double reliabilityScore;
    Date collectedDate;

public:
    InformationSource(const char*& sourceName, const char*& text,
                      double reliabilityScore, const Date& collectedDate);
    ~InformationSource() = default;

    char* getSourceName() const;
    char* getText() const;
    double getReliabilityScore() const;
    Date getCollectedDate() const;

    Article** seeAllArticles(int& count) const;
    double compareTo(const InformationSource& other) const;
};

#endif // __INFORMATION_SOURCE_H
