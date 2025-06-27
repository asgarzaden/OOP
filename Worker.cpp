#include "Worker.h"

Worker::Worker(const std::string& name, const std::string& role) : name(name), role(role) {}

std::string Worker::getName() const {
    return name;
}

std::string Worker::getRole() const {
    return role;
} 