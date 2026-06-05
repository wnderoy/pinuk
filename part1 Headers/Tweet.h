#ifndef __TWEET_H
#define __TWEET_H

#include "InformationSource.h"

class Tweet : public InformationSource {
private:
    char* author;
    int characterCount;
    int likes;
    int reposts;

public:
    // ctor, should use init list (same names as vars)
   Tweet(const char* sourceName, const char* text, const char* author,
          double reliabilityScore, const Date& collectedDate,
          int characterCount, int likes, int reposts);

    ~Tweet();
    Tweet(const Tweet& other);
    Tweet& operator=(const Tweet& other);

    const char* getAuthor() const;
    int getCharacterCount() const;
    int getLikes() const;
    int getReposts() const;
    
};

#endif
