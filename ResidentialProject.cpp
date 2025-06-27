#include "ResidentialProject.h"
#include <iostream>

double ResidentialProject::calculateCost() const {
    return 150000.0;
}

int ResidentialProject::getDuration() const {
    return 12;
}

std::string ResidentialProject::getRequiredPermits() const {
    return "Residential Building Permit";
}

void ResidentialProject::printSummary() const {
    std::cout << "Residential Project: Cost = $" << calculateCost()
              << ", Duration = " << getDuration() << " months, Permits: "
              << getRequiredPermits() << std::endl;
    std::cout << "Workers:" << std::endl;
    for (const auto& w : workers) {
        std::cout << "  " << w.getName() << " - " << w.getRole() << std::endl;
    }
    std::cout << "Materials:" << std::endl;
    for (const auto& m : materials) {
        std::cout << "  " << m.getName() << ": " << m.getQuantity() << std::endl;
    }
}

void ConstructionProject::addWorker(const Worker& worker) {
    workers.push_back(worker);
}

void ConstructionProject::addMaterial(const Material& material) {
    materials.push_back(material);
}

const std::vector<Worker>& ConstructionProject::getWorkers() const {
    return workers;
}

const std::vector<Material>& ConstructionProject::getMaterials() const {
    return materials;
} 