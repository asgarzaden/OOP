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
} 