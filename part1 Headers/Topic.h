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
    Topic(const Topic& other);
    Topic operator=(const Topic& other);



    char* getName() const;
    double getPopularityIndex() const;

    void addStory(Story* story);
    int getStoryCount() const;
    Story** getStories() const;

    Story& getTopStory() const;
    double calculateAverageImportance() const;
};

#endif // __TOPIC_H
