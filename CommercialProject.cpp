#include "CommercialProject.h"
#include <iostream>

double CommercialProject::calculateCost() const {
    return 500000.0;
}

int CommercialProject::getDuration() const {
    return 24;
}

std::string CommercialProject::getRequiredPermits() const {
    return "Commercial Building Permit, Fire Safety Certificate";
}

void CommercialProject::printSummary() const {
    std::cout << "Commercial Project: Cost = $" << calculateCost()
              << ", Duration = " << getDuration() << " months, Permits: "
              << getRequiredPermits() << std::endl;
} 