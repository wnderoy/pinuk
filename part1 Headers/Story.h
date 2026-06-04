#ifndef __STORY_H
#define __STORY_H


#include "Date.h"
using namespace std;

// Forward declaration
class Article;

class Story
{
private:
    char* title;
    char* description;
    Date startDate;
    int importanceLevel;

    Article** articles;
    int articleCount;

public:
    Story(const char*& title, const char*& description,
          const Date& startDate, int importanceLevel);
    ~Story();

    char* getTitle() const;
    char* getDescription() const;
    Date getStartDate() const;
    int getImportanceLevel() const;

    void addArticle(Article* article);
    Article** getArticles(int& count) const;

    Article** getAllCoverage(int& count) const;
    char* compareArticles() const;
    char* detectBiasDifferences() const;
};

#endif // __STORY_H
