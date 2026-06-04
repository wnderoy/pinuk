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

    Article** articles;
    int articleCount;

    Network* network;

public:
    Channel(const char*& name, const char*& country,
            const char*& politicalAlignment, int audienceSize);
    ~Channel();

    char* getName() const;
    char* getCountry() const;
    char* getPoliticalAlignment() const;
    int getAudienceSize() const;

    void addChannel(Channel* channel);
    void publish(Article* article);
    char* compareCoverage(Story* story) const;
};

#endif // __CHANNEL_H
