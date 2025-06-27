#include "InfrastructureProject.h"
#include <iostream>

double InfrastructureProject::calculateCost() const {
    return 2000000.0;
}

int InfrastructureProject::getDuration() const {
    return 36;
}

std::string InfrastructureProject::getRequiredPermits() const {
    return "Infrastructure Permit, Environmental Clearance";
}

void InfrastructureProject::printSummary() const {
    std::cout << "Infrastructure Project: Cost = $" << calculateCost()
              << ", Duration = " << getDuration() << " months, Permits: "
              << getRequiredPermits() << std::endl;
} 