#ifndef RESIDENTIALPROJECT_H
#define RESIDENTIALPROJECT_H

#include "ConstructionProject.h"

class ResidentialProject : public ConstructionProject {
public:
    double calculateCost() const override;
    int getDuration() const override;
    std::string getRequiredPermits() const override;
    void printSummary() const override;
};

#endif // RESIDENTIALPROJECT_H 