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
    std::cout << "Workers:" << std::endl;
    for (const auto& w : workers) {
        std::cout << "  " << w.getName() << " - " << w.getRole() << std::endl;
    }
    std::cout << "Materials:" << std::endl;
    for (const auto& m : materials) {
        std::cout << "  " << m.getName() << ": " << m.getQuantity() << std::endl;
    }
} 