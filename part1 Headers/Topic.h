#ifndef __TOPIC_H
#define __TOPIC_H


using namespace std;

// Forward declaration
class Story;

class Topic
{
private:
    char* name;
    double popularityIndex;

    Story** stories;
    int storyCount;

public:
    explicit Topic(const char*& name, double popularityIndex = 0.0);
    ~Topic();

    char* getName() const;
    double getPopularityIndex() const;

    void addStory(Story* story);
    Story** getStories(int& count) const;

    Story** trendingStories(int& count) const;
    char* compareStoryCoverage() const;
};

#endif // __TOPIC_H
