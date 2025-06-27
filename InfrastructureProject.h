#ifndef INFRASTRUCTUREPROJECT_H
#define INFRASTRUCTUREPROJECT_H

#include "ConstructionProject.h"

class InfrastructureProject : public ConstructionProject {
public:
    double calculateCost() const override;
    int getDuration() const override;
    std::string getRequiredPermits() const override;
    void printSummary() const override;
};

#endif // INFRASTRUCTUREPROJECT_H 