#include <iostream>
#include <vector>
#include "ResidentialProject.h"
#include "CommercialProject.h"
#include "InfrastructureProject.h"
#include "Worker.h"
#include "Material.h"

int main() {
    std::vector<ConstructionProject*> projects;
    projects.push_back(new ResidentialProject());
    projects.push_back(new CommercialProject());
    projects.push_back(new InfrastructureProject());

    projects[0]->addWorker(Worker("Alice", "Builder"));
    projects[0]->addWorker(Worker("Bob", "Electrician"));
    projects[0]->addMaterial(Material("Bricks", 1000));
    projects[0]->addMaterial(Material("Cement", 500));

    projects[1]->addWorker(Worker("Carol", "Engineer"));
    projects[1]->addWorker(Worker("Dave", "Plumber"));
    projects[1]->addMaterial(Material("Steel", 2000));
    projects[1]->addMaterial(Material("Glass", 300));

    projects[2]->addWorker(Worker("Eve", "Supervisor"));
    projects[2]->addWorker(Worker("Frank", "Operator"));
    projects[2]->addMaterial(Material("Concrete", 5000));
    projects[2]->addMaterial(Material("Asphalt", 4000));

    for (const auto& project : projects) {
        project->printSummary();
    }

    for (auto& project : projects) {
        delete project;
    }
    return 0;
}
