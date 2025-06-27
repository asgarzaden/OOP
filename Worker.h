#ifndef WORKER_H
#define WORKER_H

#include <string>

class Worker {
    std::string name;
    std::string role;
public:
    Worker(const std::string& name, const std::string& role);
    std::string getName() const;
    std::string getRole() const;
};

#endif // WORKER_H 