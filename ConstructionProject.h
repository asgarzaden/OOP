#ifndef CONSTRUCTIONPROJECT_H
#define CONSTRUCTIONPROJECT_H

#include <string>
#include <vector>
#include "Worker.h"
#include "Material.h"

class ConstructionProject {
protected:
    std::vector<Worker> workers;
    std::vector<Material> materials;
public:
    virtual ~ConstructionProject() = default;
    virtual double calculateCost() const = 0;
    virtual int getDuration() const = 0;
    virtual std::string getRequiredPermits() const = 0;
    virtual void printSummary() const = 0;
    void addWorker(const Worker& worker);
    void addMaterial(const Material& material);
    const std::vector<Worker>& getWorkers() const;
    const std::vector<Material>& getMaterials() const;
};

#endif // CONSTRUCTIONPROJECT_H 