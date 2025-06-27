#include <iostream>
#include <vector>
#include "ResidentialProject.h"
#include "CommercialProject.h"
#include "InfrastructureProject.h"

int main() {
    std::vector<ConstructionProject*> projects;
    projects.push_back(new ResidentialProject());
    projects.push_back(new CommercialProject());
    projects.push_back(new InfrastructureProject());

    for (const auto& project : projects) {
        project->printSummary();
    }

    for (auto& project : projects) {
        delete project;
    }
    return 0;
}
