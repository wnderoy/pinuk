#ifndef __CLIP_H
#define __CLIP_H

#include "InformationSource.h"
using namespace std;

class Clip : public InformationSource
{
private:
    int length;         // in seconds
    char* resolution;   
    char* transcript;

public:
    Clip(const char*& sourceName, const char*& text,
         double reliabilityScore, const Date& collectedDate,
         int length, const char*& resolution, const char*& transcript);

    int getLength() const;
    char* getResolution() const;
    char* getTranscript() const;

    InformationSource* showFull() const;
    char* generateTranscript() const;
};

#endif // __CLIP_H
