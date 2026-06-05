#ifndef __ARTICLE_H
#define __ARTICLE_H


#include "Date.h"
using namespace std;

// Forward declarations
class Story;
class Topic;
class PublicFigure;

class Article
{
private:
    char* title;
    Date publishDate;
    char* language;
    double biasScore;
    double credibilityScore;
    char* summary;

    Story** relatedStories;
    int storyCount;

    Topic** discussedTopics;
    int topicCount;

    PublicFigure** mentionedFigures;
    int figureCount;

public:
    Article(const char*& title, const Date& publishDate,
            const char*& language, double biasScore,
            double credibilityScore, const char*& summary);
    ~Article();

    char* getTitle() const;
    Date getPublishDate() const;
    char* getLanguage() const;
    double getBiasScore() const;
    double getCredibilityScore() const;
    char* getSummary() const;

    bool mentionsPublicFigure(const char* figureName) const;
    void updateCredibility(double sourceReliability);
};

#endif // __ARTICLE_H
