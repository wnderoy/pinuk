#ifndef __NETWORK_H
#define __NETWORK_H

#include "Channel.h"
#include "Article.h"
using namespace std;

// Forward declaration
class Story;

class Network
{
private:
    char* name;
    char* headquarters;
    int foundedYear;

    Channel** channels;
    int channelCount;

public:
    Network(const char*& name, const char*& headquarters,
            int foundedYear);
    ~Network();

    char* getName() const;
    char* getHeadquarters() const;
    int getFoundedYear() const;

    void addChannel(Channel* channel);
    Channel** getChannels(int& count) const;

    char* compareChannelBias() const;
    void investigateStory(Story* story);
    Article* generateCoverageReport(Story* story) const;
};

#endif // __NETWORK_H
