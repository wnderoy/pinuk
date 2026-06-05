#ifndef __ARTICLE_H
#define __ARTICLE_H


#include "Date.h"
using namespace std;

// Forward declarations
class Story;
class Topic;
class PublicFigure;
class InformationSource;

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
    int maxStories;

    Topic** discussedTopics;
    int topicCount;
    int maxTopics;

    PublicFigure** mentionedFigures;
    int figureCount;
    int maxFigures;

    InformationSource** supportingSources;
    int sourceCount;
    int maxSources;

public:
    Article(const char* title, const Date& publishDate,
            const char* language, double biasScore,
            double credibilityScore, const char* summary,
            int maxStories = 10, int maxTopics = 10, 
            int maxFigures = 10, int maxSources = 10);
    ~Article();
    Article(const Article& other);
    Article& operator=(const Article& other);

    bool operator==(const Article& other) const;

    const char* getTitle() const;
    Date getPublishDate() const;
    const char* getLanguage() const;
    double getBiasScore() const;
    double getCredibilityScore() const;
    const char* getSummary() const;
    
    int getStoryCount() const;
    int getMaxStories() const;
    int getTopicCount() const;
    int getMaxTopics() const;
    int getFigureCount() const;
    int getMaxFigures() const;
    int getSourceCount() const;
    int getMaxSources() const;

    bool mentionsPublicFigure(const char* figureName) const;
    void updateCredibility(double sourceReliability);
    void addSupportingSource(InformationSource* source);
};

#endif // __ARTICLE_H
