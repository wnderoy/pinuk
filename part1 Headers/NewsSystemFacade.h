#include <iostream>
#include "InformationSource.h"
#include "Network.h"
#include "Story.h"
#include "Topic.h"
#include "PublicFigure.h"
#include "Article.h"

using namespace std;
#ifndef NSFACADE_
#define NSFACADE_
class NewsSystemFacade {
    private:

    InformationSource** informationSourceArray;
    int sourceCount;
    int sourceMax;
    
    Network** networkArray;
    int networkCount;
    int networkMax;
    
    Story** storyArray;
    int storyCount;
    int storyMax;
    
    Topic** topicArray;
    int topicCount;
    int topicMax;
    
    PublicFigure** publicFigureArray;
    int figureCount;
    int figureMax;
    
    Article** articleArray;
    int articleCount;
    int articleMax;
    
    public:
    NewsSystemFacade(int maxCapacity = 100); //defualt ctor, with a global max capacity for all arrays

    NewsSystemFacade(int sourceMax, int networkMax, int storyMax, int topicMax, int figureMax, int articleMax);
    // if you want to give diffrant max size arrays,uses same names as the vars, YOU SHOULD USE INITIALIZATION LIST wink wink 

    ~NewsSystemFacade();

    void publishArticle(Article& articalToPublish); //print it to screen, update publish date,
    void assignReporter(const Reporter& reporterToAssign);
    void addSource(const InformationSource& source);
    void linkStory(const Story& story);
    Artical compareNewsCoverage(const Story& story);
    char* detectMediaBias(const Topic& topic);
    char* generateTopicSummary(const Topic& topic);
}
#endif
