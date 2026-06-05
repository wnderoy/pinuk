#ifndef __CHANNEL_H
#define __CHANNEL_H


#include "Article.h"
using namespace std;

// Forward declarations
class Reporter;
class Network;
class Story;

class Channel
{
private:
    char* name;
    char* country;
    char* politicalAlignment;
    int audienceSize;

    Reporter** reporters;
    int reporterCount;
    int maxReporters;

    Article** articles;
    int articleCount;
    int maxArticles;

    Network* network;

public:
    Channel(const char* name, const char* country,
            const char* politicalAlignment, int audienceSize,
            int maxReporters = 50, int maxArticles = 100);
    ~Channel();
    Channel(const Channel& other);
    Channel& operator=(const Channel& other);

    bool operator==(const Channel& other) const;
    Channel& operator+=(Reporter* reporter);

    char* getName() const;
    char* getCountry() const;
    char* getPoliticalAlignment() const;
    int getAudienceSize() const;

    int getReporterCount() const;
    int getArticleCount() const;
    int getMaxArticles() const;
    int getMaxReporters() const;

    void setNetwork(Network* targetNetwork);

    void addChannel(Channel* channel);
    void publish(Article* article);
    double calculateAverageChannelBias() const;
    int countTotalStoryCoverage(const Story* story) const;
};

#endif // __CHANNEL_H
