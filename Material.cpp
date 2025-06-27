#include "Material.h"

Material::Material(const std::string& name, double quantity) : name(name), quantity(quantity) {}

std::string Material::getName() const {
    return name;
}

double Material::getQuantity() const {
    return quantity;
} 