#ifndef MATERIAL_H
#define MATERIAL_H

#include <string>

class Material {
    std::string name;
    double quantity;
public:
    Material(const std::string& name, double quantity);
    std::string getName() const;
    double getQuantity() const;
};

#endif // MATERIAL_H 