#ifndef __PUBLIC_FIGURE_H
#define __PUBLIC_FIGURE_H


using namespace std;

// Forward declaration
class Article;

class PublicFigure
{
protected:
    char* name;
    double popularityScore;
    char* publicRole;

public:
    PublicFigure(const char*& name, double popularityScore,
                 const char*& publicRole);
    virtual ~PublicFigure();
    char* getName() const;
    double getPopularityScore() const;
    char* getPublicRole() const;

    Article** getMediaMentions(int& count) const;
    char* comparePublicOpinion() const;
};

#endif // __PUBLIC_FIGURE_H
