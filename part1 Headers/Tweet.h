#ifndef __TWEET_H
#define __TWEET_H

#include "InformationSource.h"
using namespace std;

class Tweet : public InformationSource
{
private:
    int characterCount;
    int likes;
    int reposts;

public:
    Tweet(const char*& sourceName, const char*& text,
          double reliabilityScore, const Date& collectedDate,
          int characterCount, int likes, int reposts);

    int getCharacterCount() const;
    int getLikes() const;
    int getReposts() const;

    Tweet** getAllTweets(int& count) const;
    bool detectTrend() const;
};

#endif // __TWEET_H
