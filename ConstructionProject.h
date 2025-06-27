#ifndef CONSTRUCTIONPROJECT_H
#define CONSTRUCTIONPROJECT_H

#include <string>

class ConstructionProject {
public:
    virtual ~ConstructionProject() = default;
    virtual double calculateCost() const = 0;
    virtual int getDuration() const = 0;
    virtual std::string getRequiredPermits() const = 0;
    virtual void printSummary() const = 0;
};

#endif // CONSTRUCTIONPROJECT_H 