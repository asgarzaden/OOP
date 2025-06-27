#ifndef COMMERCIALPROJECT_H
#define COMMERCIALPROJECT_H

#include "ConstructionProject.h"

class CommercialProject : public ConstructionProject {
public:
    double calculateCost() const override;
    int getDuration() const override;
    std::string getRequiredPermits() const override;
    void printSummary() const override;
};

#endif // COMMERCIALPROJECT_H 